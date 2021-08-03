#include <bits/stdc++.h>

using namespace std;

int main(){
	int n1, n2;
	
	cin >> n1 >> n2;
	if(n1-n2 >= 18 && n1-n2 <= 67){
	cout << n1 - n2 << endl << "Pode doar sangue";
	}
	else{
	cout << n1 - n2 << endl << "Nao pode doar sangue";
	}
}