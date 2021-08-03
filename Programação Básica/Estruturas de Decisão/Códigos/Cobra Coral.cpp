#include <bits/stdc++.h>

using namespace std;

int main(){
  int numero[5], i;
  for(i=0; i<4; i++){
    cin >> numero[i];
  }
  if(numero[0] == numero[2] || numero[1] == numero[3]){
    cout << "V";
  }
  else{
    cout << "F";
  }
}