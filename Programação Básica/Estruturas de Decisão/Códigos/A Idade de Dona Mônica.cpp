#include <bits/stdc++.h>

using namespace std;

int main(){
int monica, filho1, filho2, filho3;
cin >> monica >> filho1 >> filho2;
filho3 = monica - filho1 - filho2; 

if (filho3 > filho2 && filho3 > filho1){
  cout << filho3;
}
else if (filho2 > filho3 && filho2 > filho1){
  cout << filho2;
}
else {
  cout << filho1;
}
}