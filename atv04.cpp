#include<iostream>
using namespace std;

// 4) Crie uma função em linguagem C++ que receba 3 números e retorne o menor valor.


int menorValor( int num1, int num2, int num3 )
{
    if ( !( num1 > num2 ) && !( num1 > num3 ) )
    {
    cout << num1 << '\n';
    }
    else if ( !( num2 > num3 ) )
    {
    cout << num2 << '\n';
    }
    else
    {
    cout << num3 << '\n';
    }
}

int main() {
  int num1, num2, num3;
  cout << "digite 3 numeros inteiros:";
  cin >> num1 >> num2 >> num3;

  menorValor(num1, num2, num3);
  return 0;
}
