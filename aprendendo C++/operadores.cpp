#include <iostream>
#include <math.h> //funções matemáticas
using namespace std;

int main(){
  int a=5, b=2;

  int soma = a+b;
  cout << "soma: " << soma << endl;
  // ou: cout << "soma: " << a+b << endl;

  int sub = a-b;
  cout << "subtração: " << sub << endl;

  int mut = a*b;
  cout << "multiplicação: " << mut << endl;

  int quocdiv = a/b;
  cout << "quociente da divisão: " << quocdiv << endl;

  int restodiv = a%b;
  cout << "resto da divisão: " << restodiv << endl;

  //para divisão 'certa':
  float div = (float)a / (float)b;
  cout << "divisão: " << div << endl;

  float pot = pow(a,b);// pow: calcula potência, pow(base,expoente)
  cout << "potência: " << pot << endl;

  //incremento e decremento:
  cout << "A antes do incremento: " << a << endl;
  //a++; ou a = a+1; ou a+=1;
  a+=1;
  cout << "A novo: " << a++ << endl;

  cout << "B antes do decremento: " << b << endl;
  //b--; ou b=b-1; ou b-=1;
  b--;
  cout << "B novo: " << b << endl;
  return 0;
}
