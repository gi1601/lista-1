#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	cout<<"Informe um número inteiro";
	cin>>numero;
	
	int somarDigitos (int numero){
		int somar = 0;
		
		while (numero !=0 ){
			soma += numero % 10;
			numero = numero / 10;
		}
		
		return soma;
	}
	
	
	
	
	
	
}
