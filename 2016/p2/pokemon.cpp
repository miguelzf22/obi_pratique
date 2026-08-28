#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

//https://olimpiada.ic.unicamp.br/pratique/p2/2016/f2/pokemon/

/*
Resumo da correção
Pontuação	100 / 100
Linguagem	C++17 / g++
Limite de tempo permitido	0,1 s
Limite de memória permitido	64.0 MB
Máximo tempo usado	0,002 s
Máxima memória usada	552.0 KB
*/

int main(){
    int n, ans = 0;
    cin>>n;
    vector<int> pokemons(3);
    for(int i = 0; i < 3; i++){
        cin>>pokemons[i];
    }
    sort(pokemons.begin(), pokemons.end());
    for(int i = 0; i < 3; i++){
        if(pokemons[i]<=n){
            n-=pokemons[i];
            ans++;
        } else {
            break;
        }
    }
    cout<<ans<<endl;
}