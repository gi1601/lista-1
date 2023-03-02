#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	cout<<"Informe o primeiro número: ";
	cin>> n1;
	
	cout<<"Informe o segundo número: ";
	cin>> n2;
	
	cout<<"Informe o terceiro número: ";
	cin>>n3; 
	
	if(n1== n2 && n1==n3 ){
		cout<<"Os três números são iguais";
	}else if(n1>n2 && n1>n3 && n2>n3){
		cout<<"A ordem crescente é "<< n1 << ", " << n2 <<",  " << n3;
	}
}
