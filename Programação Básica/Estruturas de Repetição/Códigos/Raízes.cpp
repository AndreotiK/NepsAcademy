#include <bits/stdc++.h>

using namespace std;

int main(){
	double i, quant, numero, raiz_quadrada;
	cin >> quant;
	for (i=0; i < quant; i++){
		cin >> numero;
			double raiz_quadrada = sqrt(numero);
		cout << fixed << setprecision(4);
		cout << raiz_quadrada << "\n";
  }
}