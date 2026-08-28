#include<iostream>

using namespace std;

// https://olimpiada.ic.unicamp.br/pratique/p2/2020/f1/acelerador/

/*
Resumo da correção
Pontuação 	100 / 100
Linguagem 	C++17 / g++
Limite de tempo permitido 	0,1 s
Limite de memória permitido 	64.0 MB
Máximo tempo usado 	0,01 s
Máxima memória usada 	552.0 KB
*/

int main(){
	int n;
	cin >> n;
	int alvo = (n+3)%8;
	cout << alvo << endl;
	return 0;
}
