#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, macaco[10000], i, contador=0;
  cin >> n;
  for(i=0; i < n; i++){
    cin >> macaco[i];
    if(macaco[i] != i+1){
      contador++;
    }
  }
  if(contador!=0){
    cout << contador;
  }
  else{
    cout << "Cada mamaco em seu lugar";
  }
}