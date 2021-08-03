#include <bits/stdc++.h>

using namespace std;

int main(){
  float alunos, cap, contador = 0;

  cin >> cap >> alunos;
  do{
    contador++;

  }
  while((alunos + contador)/contador > cap);
  cout << contador;
}