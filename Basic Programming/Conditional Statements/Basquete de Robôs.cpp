#include <bits/stdc++.h>

using namespace std;

int main(){
	int distancia;
	cin >> distancia;
	
	if(distancia <= 800){
		cout << 1;
	}
	else if(distancia > 800 && distancia <= 1400){
		cout << 2;
	}
	else{
		cout << 3;
	}
}