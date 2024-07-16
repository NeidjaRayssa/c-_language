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

  // Operadores lógicos: E: &&, ou: ||, não: !
  float freq;
  cout << "qual a frequencia do aluno?\n";
  cin >> freq;

  if(media >= 5 && freq >= 75){
    cout << "aluno aprovado!\n";
  } else{  cout << "aluno reprovado!\n";
  }

  //operador ternário (outra forma de fazer if e else)
  (media >=5) ? cout << "aprovado!\n" : cout << "reprovado!\n"; 
  //se a media for maior ou igual a 5, imprime aprovado, caso contrario, imprime reprovado.
  
    return 0;
}