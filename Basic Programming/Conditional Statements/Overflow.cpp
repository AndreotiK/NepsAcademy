#include <bits/stdc++.h>

using namespace std;

int main(){
  int N, n1, n2;
  char op;

  cin >> N >> n1 >> op >> n2;
  if(op == '*'){
    if(n1*n2 > N){
      cout << "OVERFLOW";
    }
    else{
      cout << "OK";
    }
  }
  else{
    if(n1+n2 > N){
      cout << "OVERFLOW";
    }
    else{
      cout << "OK";
    }
  }
}