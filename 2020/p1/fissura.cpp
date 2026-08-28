// !! Esse teve ajuda do gemini para deixa mais rapido !!

#include<iostream>
#include<string>
#include<vector> // Biblioteca para arrays dinâmicos em C++ (pode dar append, mudar tamanho, etc....)

using namespace std;

// https://olimpiada.ic.unicamp.br/pratique/p2/2020/f1/fissura/

/*
Resumo da correção
Pontuação	100 / 100
Linguagem	C++17 / g++
Limite de tempo permitido	0,1 s
Limite de memória permitido	64.0 MB
Máximo tempo usado	0,015 s
Máxima memória usada	7.92 MB
*/

int n, f;
vector<string> mapa;
int dx[4]={1,-1,0,0}; // Direções X
int dy[4]={0,0,1,-1}; // Direções Y
// Note que eles não interligam para acabar nao indo na diagonal

void busca(int x, int y){ // Algoritmo de DFS (Busca por profundidade) !!APRENDER!!

    mapa[x][y]='*';

    for(int i = 0; i < 4; i++){
        // Monta a direção atual
        int nx = x+dx[i];
        int ny = y+dy[i];

        if(nx<n && nx>=0 && ny<n && ny>=0){ // Tá no limite da array?
            if(mapa[nx][ny]!='*' && (mapa[nx][ny]-'0')<=f){ // Logica do problema
                busca(nx, ny); // Recursividade!!!
            }
        }
    }
}

int main(){
    
    cin >> n >> f;

    mapa.resize(n);

    for(int i = 0; i < n; ++i){
        cin >> mapa[i]; 
    }

    if((mapa[0][0]-'0')<=f){ // Só começa se o primeiro valor for menor que a frequência
        busca(0, 0);
    }

    for(int i = 0; i<n;++i){
        cout << mapa[i] << endl;
    }
    return 0;
}