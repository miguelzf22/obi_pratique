#include<iostream>

using namespace std;

// https://olimpiada.ic.unicamp.br/pratique/p2/2020/f1/camisetas/

/*
Resumo da correção
Pontuação 	100 / 100
Linguagem 	C++17 / g++
Limite de tempo permitido 	0,1 s
Limite de memória permitido 	64.0 MB
Máximo tempo usado 	0,001 s
Máxima memória usada 	504.0 KB
*/

int main(){
	int n;
	cin >> n;
	int atual, camisas[2]={0};
	for(int i = 0; i < n; i++){
		cin >> atual;
		if(atual==1){
			camisas[0]++;
		} else {
			camisas[1]++;
		}
	}
	int p, m;
	cin >> p >> m;
	if(p<=camisas[0] && m<=camisas[1]){
		cout << "S\n";
	} else {
		cout << "N\n";
	}
	
}
