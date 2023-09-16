#include <iostream>
#include <string>

using namespace std;

void passagemValor (int &x){

    x = x*2;
    cout <<"Valor da função: " << x << endl;

}

int main (){

    int numero = 5;

    cout << "Valor antes da funcao: " << numero << endl;

    passagemValor(numero);

    cout << "Valor depois da funcao: " << numero << endl;

return 0;

}
