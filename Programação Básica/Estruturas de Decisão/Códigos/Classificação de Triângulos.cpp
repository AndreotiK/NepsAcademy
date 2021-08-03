#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b, c;

  cin >> a >> b >> c;
  if(a < b + c && b < a + c && c < a + b){
    cout << "S" << endl;
    if(a==b && b==c){
      cout << 3;
    }
    else if(a==b || b==c || a==c){
      cout << 1;
    }
    else{
      cout << 2;
    }
  }
  else{
    cout << "N";
  }
}