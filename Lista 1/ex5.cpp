#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, result;
	
	cout<<"Informe o primeiro número: ";
	cin>> n1;
	
	cout<<"Informe o segundo número: ";
	cin>> n2;
	
	cout<<"Informe o terceiro número: ";
	cin>>n3; 
	
	result = (n1+(n2+n3)) / 3;
	
	if(result >=7){
		cout<<result<< "- Aprovado";
	}else if(result >=5 &&  result <=6,9){
		cout<<result << "- Recuperação";
	}else if(result <5){
		cout<<result << "- Reprovado";
	}
}
