#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, r;
    cin >> x >> y;
   
    r = (x + y)%2;
    
	if (r == 1){
		cout << "Cino";
	}
	else if(r == 0) {
		cout << "Bino";
	}	
}