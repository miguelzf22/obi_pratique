#include<iostream>
#include<cmath>

// https://olimpiada.ic.unicamp.br/pratique/p2/2021/f2/calculo/

/* 
Colinha para enteder o codigo de C++:
cout é output pro usuário, usa <<,
cin é input do usuário, usa >> 
*/

/* Resultado:
Pontuação 	100 / 100
Linguagem 	C++17 / g++
Limite de tempo permitido 	0,1 s
Limite de memória permitido 	64.0 MB
Máximo tempo usado 	0,003 s
Máxima memória usada 	508.0 KB 
*/

using namespace std;

int soma(int num){
	if(num<10){
		return num;
	} else {
		int expoente = log10(num);
		int coisado = pow(10, expoente);
		return num / coisado + soma(num - (num/coisado*coisado)) ;
	}
}

int main(){
	int n, a, b;
	cin >> n >> a >> b;
	int cont = 0;
	for(int i = a; i <= b; i++){
		if(soma(i)==n){
			cont++;
		}
	}
	cout << cont << endl;
}
