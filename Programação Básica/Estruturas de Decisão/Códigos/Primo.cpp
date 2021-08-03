#include <iostream>

using namespace std;

bool eh_primo(int x){
  int i;
	if(x == 1){
    return 0;
  }
  for(i=x-1; i>1; i--){
    if(x%i == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
	int x;
  
	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}