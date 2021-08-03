#include <bits/stdc++.h>

using namespace std;

int main(){
  double N, M, P;
  cin >> N >> M >> P;
  M = M*100/N;
  if(M >= P){
    cout << "UdiCity esta segura!!!";
  }
  else{
    cout << "UdiCity esta em perigo, vamos de LockDalson!!!";
  }
}