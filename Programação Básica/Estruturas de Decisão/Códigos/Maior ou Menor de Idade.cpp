#include <bits/stdc++.h>

using namespace std;

int main(){
	int n1, n2;
	
	cin >> n1 >> n2;
	if(n1-n2 >= 18){
	cout << n1 - n2 << endl << "Maior";
	}
	else{
	cout << n1 - n2 << endl << "Menor";
	}
}