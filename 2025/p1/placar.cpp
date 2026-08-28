#include<iostream>

using namespace std;

int main(){
	int p, c;
	cin >> p;
	int a[p];
	for(int i = 0; i < p; i++){
		cin >> a[i];
	}
	cin >> c;
	int b[c];
	for(int i = 0; i < c; i++){
		cin >> b[i];
	}
	cout << p << c << endl;
}
