#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C, soma = 0;
    cin >> A >> B >> C;

    soma = A + B + C;
        
    if (soma == 0 || soma == 3){
        cout << "*";  
    }
    else if (soma == 1 || soma == 2){
        if (A == B){
            cout << "C";
        } 
        else if (A == C){
            cout << "B";
        }
        else{
            cout << "A";
        }
    }
}