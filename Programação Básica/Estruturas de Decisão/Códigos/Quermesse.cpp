#include <bits/stdc++.h>

using namespace std;

int main(){
  int i, quant, numero, j=0, vencedor[10000];
  
  cin >> quant;
  if(quant == 0)
  return 0;
  do{
    for(i=0; i< quant; i++){ 
        cin >> numero;
        if(numero == i + 1){
          vencedor[j] = numero;
          j++;
        }
      }
    cin >> quant;
  }
  while(quant != 0);
   
  for(i=0; i<j; i++){
    cout << "Teste " << i + 1<< endl << vencedor[i] << endl;
  }
}