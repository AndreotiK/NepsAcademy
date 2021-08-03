#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, contador=0;

  do{
    cin >> n;
    contador ++;
  }
  while(n!=2018);
  cout << contador - 1;
}