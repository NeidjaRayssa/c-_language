#include <iostream>

using namespace std;

int main(){
  float nota1, nota2;
  cout << "Digite a nota 1:\n";
  cin >> nota1;
  cout << "Digite a nota 2:\n";
  cin >> nota2;

  float media = (nota1 + nota2)/2;

// (if)se... (else)caso contrario...
  if(media >= 5){
    cout << "Aluno aprovado!\n";
  } else{
    cout << "Aluno reprovado!\n";
  }
    return 0;
}