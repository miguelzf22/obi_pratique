#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

//https:// olimpiada.ic.unicamp.br/pratique/p2/2019/f2/supermercado/

/*
Resumo da correção
Pontuação	100 / 100
Linguagem	C++17 / g++
Limite de tempo permitido	0,1 s
Limite de memória permitido	64.0 MB
Máximo tempo usado	0,001 s
Máxima memória usada	552.0 KB 
*/

int main(){
    int n; float ans=-1;
    cin>>n;
    while(n--){
        float b, g;
        cin>>b>>g;
        float preco = (b/g)*1000;
        if(ans==-1) ans=preco; else ans=min(ans, preco);
    }
    printf("%.2f\n", ans);
}