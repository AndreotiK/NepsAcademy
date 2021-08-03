#include <bits/stdc++.h>

using namespace std;

int main(){
    int i;
    string telefone;
    cin >> telefone;

    for(i=0; i < telefone.length(); i++){
        if(telefone[i] != '-'){
            if((int)telefone[i] - 10 > 0 || (int)telefone[i] - 10 > 10){
                if(telefone[i] == 'A' || telefone[i] == 'B' || telefone[i] == 'C'){
                    telefone[i] = '2';
                }
                else if(telefone[i] == 'D' || telefone[i] == 'E' || telefone[i] == 'F'){
                    telefone[i] = '3';
                }
                else if(telefone[i] == 'G' || telefone[i] == 'H' || telefone[i] == 'I'){
                    telefone[i] = '4';
                }
                else if(telefone[i] == 'J' || telefone[i] == 'K' || telefone[i] == 'L'){
                    telefone[i] = '5';
                }
                else if(telefone[i] == 'M' || telefone[i] == 'N' || telefone[i] == 'O'){
                    telefone[i] = '6';
                }
                else if(telefone[i] == 'P' || telefone[i] == 'Q' || telefone[i] == 'R' || telefone[i] == 'S'){
                    telefone[i] = '7';
                }
                else if(telefone[i] == 'T' || telefone[i] == 'U' || telefone[i] == 'V'){
                    telefone[i] = '8';
                }
                else if(telefone[i] == 'W' || telefone[i] == 'X' || telefone[i] == 'Y' || telefone[i] == 'Z'){
                    telefone[i] = '9';
                }
            }
        }
    }
    cout << telefone;
}
