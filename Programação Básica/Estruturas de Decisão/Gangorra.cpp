#include <bits/stdc++.h>

using namespace std;

int main(){
    float c1, c2, p1, p2;
    cin >> p1 >> c1 >> p2 >> c2;

    if ((p1*c1)/(p2*c2) > 1){
	    cout << -1;
    }
    else if ((p1*c1)/(p2*c2) == 1){
	    cout << 0;
}
    else{
	    cout << 1;
    }
}