#include <bits/stdc++.h>

using namespace std;

int main(){
  int n1, n2;
  cin >> n1 >> n2;
  cout << n1*2 + n2*2 << endl;
  if(n1 == n2){
    cout << "Quadrado";
  }
  else{
    cout << "Retangulo";
  }
}