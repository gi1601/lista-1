#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	cout<<"Informe o primeiro n�mero: ";
	cin>> n1;
	
	cout<<"Informe o segundo n�mero: ";
	cin>> n2;
	
	cout<<"Informe o terceiro n�mero: ";
	cin>>n3; 
	
	if(n1== n2 && n1==n3 ){
		cout<<"Os tr�s n�meros s�o iguais";
	}else if(n1>n2 && n1>n3 && n2>n3){
		cout<<"A ordem crescente � "<< n1 << ", " << n2 <<",  " << n3;
	}
}
