#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if(numero>0){

        cout << "O numero " << numero << " eh positivo";
    
    }
    else if (numero<0){

        cout << "O numero " << numero << " eh negativo";

    }
    else{

        cout << "O numero eh 0 \n" << endl;

    }


return 0;
}