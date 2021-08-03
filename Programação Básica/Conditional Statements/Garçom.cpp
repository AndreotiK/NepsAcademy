#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, soma, l, c, n;
	
	cin >> n; 
	soma = 0;
	
	for(i=0; i < n; i++){ 
		cin >> l >> c; 
		if(l > c){ 
			soma += c;  
		}
	}
	cout << soma;
}