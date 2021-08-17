#include <bits/stdc++.h>

using namespace std;
int main(){
  int i, contador, n;
  
  contador = 1;
  cin >> n; //6
  
  for (i = 0; i < n; i++){ // n = 6; i = 2
    if (n%contador == 0){ //6%3 == 0
      cout << contador << " "; // 1 2 3
      contador++; // == 4
    }
    else{
      contador++;
    }
  }
}