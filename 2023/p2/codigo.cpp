#include<iostream>
#include<string>

// EU NAO SEI SE TA CERTO OK

using namespace std;

int hm[57];

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i:s){
        hm[(int)i-'A']++;
    }
    for(int i = 0; i < n; i++){
        if(i==0 || s[i-1]!=s[i]){
            cout << hm[(int)s[i]-'A'] << ' ' << s[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}