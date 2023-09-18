#include <iostream>
#include <string>

using namespace std;

int main (){

    int numero;
    double divisao;

    cout << "Digite um numero: " ;
    cin >> numero;

//Operaçoes de soma, subratação e divisão
for(int i = 0; i < 11; i++){

    cout << numero << " + " << i << " = " << numero + i << endl;

}
for(int k = 0; k < 11; k++){

    cout << numero << " - " << k << " = " << numero - k << endl;

}
for(int j = 0; j < 11; j++){

    cout << numero << " * " << j << " = " << numero * j << endl;
    
}
for(int m = 1; m < 11; m++){

    divisao = numero;
    cout << divisao << " / " << m << " = " << divisao / m << endl;

}

    cout << "\n" << endl;

return 0;
}