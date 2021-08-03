#include <bits/stdc++.h>

using namespace std;

int main(){
  int N,contador=0;

  cin >> N;
  if(N==1){
    cout << 0;
  }
  else{
    do{
      if(N%2==0){
        N = N/2;
      }
      else if(N%2==1 && N!= 1){
        N = N*3 +1;
      }
      contador++;
  }
    while(N!=1);
    cout << contador;
  }  
}