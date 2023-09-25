#include <iostream>

using namespace std;

int main (){

    int numero, escolha, soma = 0;

    cout << "Digite um numero: ";
    cin >> escolha;

   cout << escolha << " \n" ;
   for(numero = 1; numero <= escolha; numero++){
        cout << numero << " ";
        soma += numero;
   }
    cout <<"\nA soma dos numeros naturais eh: " << soma << endl;
        
    cout << "Fim do programa..." << endl;


return 0;
}