#include<iostream>
#include<string>
#include<algorithm>

// EU NAO SEI SE TA CERTO OK

using namespace std;

int diferenca(int num){
    string x, y;
    x = to_string(num);
    y = to_string(num);
    sort(x.begin(), x.end());
    sort(y.rbegin(), y.rend());
    int dif;
    dif = stoi(y) - stoi(x);
    if(dif==num){
        return 1;
    } else {
        cout << num << '\n';
        return diferenca(dif);
    }
}

int main(){
    int num;
    cin >> num;
    diferenca(num);
    return 0;
}