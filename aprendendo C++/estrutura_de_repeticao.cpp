#include <iostream>

using namespace std;

int main(){
  int n;
  cout << "digite um numero inteiro nao negativo:\n";
  cin >> n;

  int soma = 0;
  int cont = 1;
  
  //while
  while(cont <= n){
    soma += cont;
    cont++;
    cout << "soma dos numeros de 0 ate " << n << "= " << soma << endl;
  }
  
//do while
  do{
    soma += cont;
    cont++;
  }while(cont <= n);

  //for
  for(int j=1; j<=n; j++){
    soma+=j;
    cout << "soma dos numeros de 0 ate " << n << "= " << soma << endl;
  }


  
//break serve para quebrar alguma estrutura de repetição
  return 0;
}