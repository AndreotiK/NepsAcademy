#include <bits/stdc++.h>

using namespace std;

int main(){
    int lampA, lampB, finalA, finalB;

    cin >> lampA >> lampB >> finalA >> finalB;

    if(finalA == lampA){
        if(lampB == finalB){
            cout << 0;
        }
        else{
            cout << 2;
        }
    }
    else{
      cout << 1;
    }
}
