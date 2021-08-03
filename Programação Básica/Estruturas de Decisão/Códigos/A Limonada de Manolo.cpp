#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, C[10000], i=0, valor=0;
  cin >> N >> C[i];

  for(i=0; i<N; i++){
    valor += C[i]; //5
    if(C[i] > 1){
      C[i+1] = C[i] -1; 
    }
    else{
      C[i + 1] = C[i];
    }
  }
  cout << valor;
}