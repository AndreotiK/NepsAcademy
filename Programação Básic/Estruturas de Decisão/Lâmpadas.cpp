#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, i, x, a, b;
	
	a = 0;
	b = 0;
	cin >> n; 
	
	for (i = 0; i < n; i++){ 
		
		cin >> x; 
		
		if (x == 1){
			a = a + 1; 
		}
		else if (x == 2){
			a = a + 1; 
			b = b + 1; 
		}
		if (a == 2){
			a = a - 2;
		}
		if (b == 2){
			b = b - 2;
		}
	}
  cout << a << "\n" << b;
}