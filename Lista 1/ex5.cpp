#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, result;
	
	cout<<"Informe o primeiro n�mero: ";
	cin>> n1;
	
	cout<<"Informe o segundo n�mero: ";
	cin>> n2;
	
	cout<<"Informe o terceiro n�mero: ";
	cin>>n3; 
	
	result = (n1+(n2+n3)) / 3;
	
	if(result >=7){
		cout<<result<< "- Aprovado";
	}else if(result >=5 &&  result <=6,9){
		cout<<result << "- Recupera��o";
	}else if(result <5){
		cout<<result << "- Reprovado";
	}
}
