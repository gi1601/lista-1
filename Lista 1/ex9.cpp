#include <iostream>
using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
   int n, original, resto, soma = 0;
   cout << "Digite um n�mero inteiro: ";
   cin >> n;

   original = n;

   while (original != 0) {
      resto = original % 10;
      soma += resto * resto * resto;
      original /= 10;
   }

   if (soma == n) {
      cout << "O n�mero " << n << " � um n�mero de Armstrong" << endl;
   } else {
      cout << "O n�mero " << n << " n�o � um n�mero de Armstrong" << endl;
   }

   return 0;
}





