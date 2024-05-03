#include <iostream> //biblioteca para fazer entradas e saidas

using namespace std; //para não precisar usar o std:: direto

int main(){
  int inteiro;
  inteiro = 5;
  cout << inteiro << endl; //<< endl é o mesmo que \n
  float real; //double também funciona mas armazena mais casas decimais
  real = 5.2;
  cout << real << endl;

  bool booleano;
  booleano = true;// true: 1, false: 0
  cout << booleano << endl;

  char letra;
  letra = 'a';// "": string, '': caractere
  cout << letra << endl;

  string palavra;
  palavra = "bola";
  cout << palavra << endl;

  int idade;
  cout << "Qual sua idade?" << endl; //cout é o mesmo que printf
  cin >> idade;// cin é o mesmo que scanf
  cout << "sua idade é:" << idade << endl;
    return 0;
}