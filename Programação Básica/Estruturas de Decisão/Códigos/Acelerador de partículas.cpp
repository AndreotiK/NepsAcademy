#include <bits/stdc++.h>

using namespace std;

int main(){
    int distancia;
    cin >> distancia;

    distancia -= 3;

    if(distancia < 8){
        if(distancia == 3){
            cout << 1;
        }
        else if(distancia == 4){
            cout << 2;
        }
        else{
            cout << 3;
        }
    }
    else{
        distancia %= 8;
         if(distancia == 3){
            cout << 1;
        }
        else if(distancia == 4){
            cout << 2;
        }
        else{
            cout << 3;
        }
    }
}