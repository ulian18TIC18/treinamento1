#include <iostream>
#include <string>

using namespace std;

int main(){
   int primeiroNumero, segundoNumero, soma;

   cout << "Digite o primeiro numero: " ;
   cin >> primeiroNumero;

   cout << "Digite o segundo numero: " ;
   cin >> segundoNumero;

   soma = (primeiroNumero + segundoNumero);

   cout << "O resultado de " << primeiroNumero <<" + " << segundoNumero << 
   " eh igual a: " << soma << endl;

return 0;
}