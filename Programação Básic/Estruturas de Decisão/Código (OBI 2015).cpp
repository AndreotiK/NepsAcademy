#include <bits/stdc++.h>

using namespace std;

int main(){
  int i, quant, contador = 0;
  cin >> quant;
  int numero[quant];

  for(i = 0; i < quant; i++){
    cin >> numero[i];
    if(i>=2 && numero[i]==0 && numero[i-1]==0 && numero[i-2]==1){
        contador++;
      }
    }
  cout << contador;
}