#include <bits/stdc++.h>

using namespace std;

int main(){
int x, y, m;
 
cin >> x >> y;
m = (x + y)/2;

	if (m >= 7){
		cout << "Aprovado";
	}
	
	else if (m < 7 & m >= 4){
		cout << "Recuperacao";
	}
	
	else{
		cout << "Reprovado";
	}
}