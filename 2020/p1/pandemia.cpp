#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n, m, infectados=0;
	cin >> n >> m;
	bool amigos[n]={false};
	int i, r;
	cin >> i >> r;
	// codigo mt feio e ruim de ler abaixo
	for(int x = 0; x < m; ++x){
		if(x==r-1){
			amigos[i-1]=true;
		}
		int num;
		cin >> num;
		int pessoas[num];
		for(int j = 0; j < num; j++){
			cin >> pessoas[j];
		}
		for(int j = 0; j < num; j++){
			if(amigos[pessoas[j]-1]){
				for(int k = 0; k < num; k++){
					amigos[pessoas[k]-1]=true;
				}
				break;
			}
		}
	}
	for(int x = 0; x < n; x++){
		if(amigos[x]){
			infectados++;
		}
	}
	cout << infectados << '\n';
	return 0;
}
