#include<bits/stdc++.h>
using namespace std;
#define ll long long

//https://olimpiada.ic.unicamp.br/pratique/p2/2017/f2/frete/

/*
Resumo da correção
Pontuação	100 / 100
Linguagem	C++17 / g++
Limite de tempo permitido	0,1 s
Limite de memória permitido	64.0 MB
Máximo tempo usado	0,002 s
Máxima memória usada	512.0 KB
*/

int menorCusto(unordered_map<int, vector<pair<int, int>>>& grafo, int src, int dst){
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> fila;
    unordered_set<int> visitado;
    vector<ll> preco(dst+1, INT64_MAX);
    preco[src]=0;
    fila.push({0, src});
    while(!fila.empty()){
        int current = fila.top().second;
        fila.pop();
        for(auto& v:grafo[current]){
            if(preco[current]+v.first<preco[v.second]){
                preco[v.second]=preco[current]+v.first;
                fila.push({preco[v.second], v.second});
            }   
        }
    }
    return preco[dst];
}

int main(){
    int n, m;
    cin>>n>>m;
    unordered_map<int, vector<pair<int, int>>> grafo;
    while(m--){
        int a, b, c;
        cin>>a>>b>>c;
        grafo[a].push_back({c, b});
        grafo[b].push_back({c, a});
    }
    cout<<menorCusto(grafo, 1, n)<<"\n";
}