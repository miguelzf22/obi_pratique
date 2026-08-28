#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
// https://olimpiada.ic.unicamp.br/pratique/p2/2017/f2/xerxes/

/*
Resumo da correção
Pontuação	100 / 100
Linguagem	C++17 / g++
Limite de tempo permitido	0,1 s
Limite de memória permitido	64.0 MB
Máximo tempo usado	0,002 s
Máxima memória usada	536.0 KB
*/

int jogo[5][5]={
    {0,1,1,0,0},
    {0,0,1,1,0},
    {0,0,0,1,1},
    {1,0,0,0,1},
    {1,1,0,0,0}
};

int main(){
    int n, pd=0, px=0;
    cin>>n;
    while(n--){
        int d, x;
        cin>>d>>x;
        if(jogo[d][x]){
            pd++;
        } else {
            px++;
        }
    }
    if(pd>px) cout<<"dario"<<endl; else cout<<"xerxes"<<endl;
    return 0;
}