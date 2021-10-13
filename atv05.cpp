#include<iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

// 5) Crie uma função em linguagem C++ chamado Dado() que retorna, através de sorteio, um número de 1 até 6.

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
