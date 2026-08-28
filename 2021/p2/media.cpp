#include<iostream>

using namespace std;

// https://olimpiada.ic.unicamp.br/pratique/p2/2021/f2/media/

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
	int a, b, c;
	cin >> a >> b;
	c = 2*a - b; // Operação inversa de a = (a+b+c)/3
	cout << c;
}
