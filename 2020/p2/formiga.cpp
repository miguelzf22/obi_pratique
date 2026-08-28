#include<bits/stdc++.h>
using namespace std;
#define ll long long

// https://olimpiada.ic.unicamp.br/pratique/p2/2020/f2/formiga/

/*
Resumo da correção
Pontuação	100 / 100
Linguagem	C++17 / g++
Limite de tempo permitido	0,1 s
Limite de memória permitido	64.0 MB
Máximo tempo usado	0,009 s
Máxima memória usada	644.0 KB
*/


vector<int> memo;

int explore(unordered_map<int, vector<int>>& tuneis, int src){
    if(memo[src]!=-1){
        return memo[src];
    }
    int andou = 1;
    for(auto v:tuneis[src]){
        int soma=1;
        soma+=explore(tuneis, v);
        andou=max(andou, soma);
    }
    memo[src]=andou;
    return andou;
}

int main(){
    int s, t, p;
    cin>>s>>t>>p;
    vector<int>altura(s+1,0);
    for(int i = 1; i <= s; i++){
        cin>>altura[i];
    }
    unordered_map<int, vector<int>> tuneis;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(altura[a]>altura[b]){
            tuneis[a].push_back(b);
        } else if (altura[b]>altura[a]) {
            tuneis[b].push_back(a);
        }
    }
    memo.resize(s+1, -1);
    // for(auto key:tuneis){
    //     cout<<get<0>(key)<<": ";
    //     for(auto i:get<1>(key)){
    //         cout<<i<< ", ";
    //     }
    //     cout<<endl;
    // }
    cout<<explore(tuneis, p)-1<<"\n";
}