#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, i, soma, valor, contador; //n = índices // i = cont
	
	cin >> n; 
	
	soma = 0;
	contador = 0;
	
	for(i = 0; i < n; i++){ 
		cin >> valor; 
		if (soma < 1000000){
			soma = valor + soma; 
			contador ++; 
		}
	}
	
	cout << contador;
}