#include <iostream>
using namespace std;

//uma constante, não pode ser alterada
#define pi 3.14; 

void apresentacao(){
    cout << "Meu nome é Neidja e sou estudante de ADS \n";
}
// int soma(int &x, int &y) se usar o &, o que acontecer com o x vai alterar o valor da variavel a também 
int soma(int x, int y)//valores de entrada
{
    int soma; //variavel local, só vale nessa função.
    soma = x+y;
    return soma;
}

int main(){
    apresentacao();

    int a=5, b=4;//valores que vão entrar 
    int s;
    s = soma(a,b);
  cout << "Soma: " << s << endl;
  cout << pi;

    return 0;
}