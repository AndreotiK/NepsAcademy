#include <bits/stdc++.h>

using namespace std;

int main(){
	int i, n, forca, desl, total=0;
	cin >> n;
	
	for(i=0; i<n; i++){
		cin >> forca >> desl; 
		total += forca*desl;
	}
	if(total > 0){
		cout <<"O corpo gira no sentido horario";
	}
	else if(total < 0){
		cout <<"O corpo gira no sentido anti-horario";
	}
	else{
		cout << "O corpo esta em equilibrio";
	}
}