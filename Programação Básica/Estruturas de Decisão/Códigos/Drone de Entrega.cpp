#include <bits/stdc++.h>

#include <bits/stdc++.h>

using namespace std;

int main(){
int A, B, C, H, L;

cin >> A >> B >> C >> H >> L; //
if (A > B && A > C){
  if ((H > B && L > C)||(H > C && L > B)){
    cout << "S";
}
  else{
    cout << "N";}
}
else if (B > A && B > C){
  if ((H > A && L > C)||(H > C && L > A)){
    cout << "S";
}
  else{
    cout << "N";}
}
else{
  if ((H > A && L > B)||(H > B && L > A)){
    cout << "S";
}
  else{
    cout << "N";}
}
}