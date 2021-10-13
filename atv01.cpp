#include<iostream>
using namespace std;

// 1) Crie uma função que receba um valor e informe se ele é positivo ou não.


int funcao1 (int parametro) {
	if (parametro <= 0) {
	cout << parametro << endl;
	return 1;
	}
	else if(parametro >= 0){
	cout << parametro << endl;
	}
	return 0;	
}

int main() {
	
	int numero;
	cin  >> numero;	
	if (funcao1(numero)) {
	cout << "negativo";
	} else {
	cout << "positivo";
	}
	return 0;
}


