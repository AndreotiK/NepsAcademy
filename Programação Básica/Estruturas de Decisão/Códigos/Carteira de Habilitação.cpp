#include <bits/stdc++.h>

using namespace std;

int main(){
	int n1, n2;
	
	cin >> n1 >> n2;
	if(n1-n2 >= 18){
	cout << n1 - n2 << endl << "Pode tirar carteira" << endl << n1 - n2 - 18;
	}
	else{
	cout << n1 - n2 << endl << "Nao pode tirar carteira" << endl << 18 - (n1 - n2);
	}
}