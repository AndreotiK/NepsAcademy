#include <bits/stdc++.h>

using namespace std;

int main(){
	int P, R;
	cin >> P >> R;
	
	if (P == 0){
		cout << "C";
	}
	else if (P == 1 && R == 0){
		cout << "B";
	}
	else{
		cout << "A";
	}
}