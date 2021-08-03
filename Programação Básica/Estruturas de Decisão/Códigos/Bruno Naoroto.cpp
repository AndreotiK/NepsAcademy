#include <bits/stdc++.h>

using namespace std;

int main(){
  int i, valor = 0, temp;

  for(i=0; i < 5; i++){
    cin >> temp;
    valor += temp;
  }
  if(valor >= 40){
    cout << "Carga de horas completa";
  }
  else{
    cout << "Carga de horas incompleta";
  }
}