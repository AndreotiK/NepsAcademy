#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, j, linhas, colunas, mapa[1000][1000];
    long long contador = 0;
    string c;

    cin >> linhas >> colunas;

    for(i=0; i< linhas; i++){
        cin >> c;
        for(j=0; j < colunas; j++){
            if(c[j] == '.'){
                mapa[i][j] = 0;
                if(i != linhas - 1 && i != 0 && j != 0){
                    if(mapa[i][j-1] == 1 && mapa[i-1][j] == 1){
                        mapa[i][j-1] = 2;
                        mapa[i-1][j] = 2;
                        contador += 2;
                    }
                    else if(mapa[i][j-1] == 1){
                        mapa[i][j-1] = 2;
                        contador++;
                    }
                    else if(mapa[i-1][j] == 1){
                        mapa[i-1][j] = 2;
                        contador++;
                    }
                }
            }
            else{
                mapa[i][j] = 1;
                if(i != linhas - 1 && i != 0 && j != 0 && j != colunas - 1){
                    if(mapa[i][j-1] == 0 || mapa[i-1][j] == 0){
                        mapa[i][j] = 2;
                        contador++;
                    }
                }
                else{
                    mapa[i][j] = 2;
                    contador++;
                }
            }
        }
    }
    cout << contador;
}
