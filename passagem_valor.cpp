#include <iostream>

using namespace std;

void passagemPorValor(int x){

    x = x * 2;
    cout << "Valor dentro da funcao: " << x << endl;
    
}

int main(){

    int numero = 5;
    
    cout << "Valor antes da funcao: " << numero << endl;

    passagemPorValor(numero);

    cout << "Valor depois da funcao: " << numero << endl;
 

return 0;
}
