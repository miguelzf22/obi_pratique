#include<iostream>
using namespace std;

int main(){
    int idade[3];
    for(int i = 0; i < 3; i++)
        cin >> idade[i];

    for(int i = 0; i < 2; i++)
        for(int j = i+1; j < 3; j++)
            if(idade[i]>idade[j]){
                int aux = idade[i];
                idade[i] = idade[j];
                idade[j] = aux;
            }
        
    cout << idade[1] << endl;
}