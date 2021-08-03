#include <bits/stdc++.h>
using namespace std;

int main(){
int maior, n, i;

cin >> maior;
for (i=0; i < 2; i++){
cin >> n;
maior = (n > maior) ? n : maior;
}
cout << maior;
}