#include <bits/stdc++.h>

using namespace std;

int main(){
	int L, R, D;
	cin >> L >> R >> D;
	
	if(R>50){
    if(R > L){
      if(R > D){
        cout << "S";
      }
      else{
        cout << "N";
      }
    }
    else{
      cout << "N";
    }
  }
  else{
    cout << "N";
  }
} 