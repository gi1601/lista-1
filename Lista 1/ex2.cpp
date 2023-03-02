#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	float n1;
	
	cout<<"Informe um numero inteiro: ";
	cin>> n1;
	
	if(n1>12){
		cout<<"Mês invalido";
	}else if(n1 == 1){
		cout<<"Janeiro";
	}else if(n1 == 2){
		cout<<"Fevereiro";
	}else if( n1== 3){
		cout<<"Março";
	}else if(n1 == 4){
		cout<<"Abril";
	}else if(n1 == 5){
		cout<<"Maio";
	}else if(n1==6){
		cout<<"Junho ";
	}else if(n1 == 7){
		cout<<"Julho";
	}else if(n1 == 8){
		cout<<"Agosto";
	}else if(n1 == 9){
		cout<<"Setembro";
	}else if(n1 == 10){
		cout<<"Outubro";
	}else if(n1 == 11){
		cout<<"Novembro";
	}else if(n1 == 12){
		cout<<"Dezembro";
	}
}	
