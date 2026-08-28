#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int n, doces, maior_anterior=10001;
vector<vector<int>> pontos;

void maior(int x, int y){
    vector<int> distancias;
    int maior_atual = 0, posx=0, posy=0;
    for(int i = 0; i < n; ++i){
        distancias.push_back(pow(abs(x-pontos[i][0]), 2) + pow(abs(y-pontos[i][1]), 2));
        if(!(pontos[i][0]==x && pontos[i][1]==y)&&distancias[i]>maior_atual && distancias[i]<maior_anterior){
            maior_atual = distancias[i];
            posx = pontos[i][0];
            posy = pontos[i][1];
        }
    }
    if(maior_atual<maior_anterior && !(posx==0 && posy==0)){
        doces++;
        maior_anterior = maior_atual;
        cout << posx << posy << endl;
        maior(posx, posy);
    }
}


int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        pontos.push_back({x, y});
    }

    maior(0, 0);
    cout << doces << '\n';
}