#include<iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

// 5) Crie uma fun��o em linguagem C++ chamado Dado() que retorna, atrav�s de sorteio, um n�mero de 1 at� 6.

int dado() 
{ 
    srand((unsigned)time(0)); 
    int i;
    i = (rand()%6)+1; 
}


int main(){
	int sorteio = dado();
	cout << sorteio;
}
