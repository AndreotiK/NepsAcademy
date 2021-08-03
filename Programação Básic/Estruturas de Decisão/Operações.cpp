#include <bits/stdc++.h>

using namespace std;

int main(){
  double n1, n2;
  char op;

  cin >> op >> n1 >> n2;

  if(op == 'M'){
    cout << setprecision(2) << fixed;
    cout << n1*n2;
  }
  else{
    cout << setprecision(2) << fixed;
    cout << n1/n2;
  }
}