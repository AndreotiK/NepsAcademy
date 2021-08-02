#include <bits/stdc++.h>

using namespace std;

int main(){
    int n1, n2, n3, o, p, b;
    o = 1;
    p = 2;
    b = 3;
    cin >> n1 >> n2 >> n3;

    if (n1 < n2 && n1 < n2 && n2 < n3){
	    n1 = o = 1; 
	    n2 = p = 2; 
	    n3 = b = 3; 
    }
    else if (n1 < n2 && n1 < n3){
	    n1 = o = 1;
	    n2 = b = 2;
	    n3 = p = 3;
    }
    else if (n2 < n1 && n2 < n3 && n1 < n3){
	    n1 = p = 1;
	    n2 = o = 2;
	    n3 = b = 3;
    }
    else if (n2 < n1 && n2 < n3){
	    n1 = b = 1;
	    n2 = o = 2;
	    n3 = p = 3;
    }
    else if (n2 < n1){
	    n1 = b = 1;
	    n2 = p = 2;
	    n3 = o = 3;
    }
    else{
	    n1 = p = 1;
	    n2 = b = 2;
	    n3 = o = 3;	
    }
    cout << o << "\n" << p << "\n" << b << "\n";
}