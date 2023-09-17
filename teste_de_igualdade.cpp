#include <iostream>
#include <string>

using namespace std;

int main (){

    int numeroCerto = 27, tentativaNumero;
    int numTentativa = 5;

while (numTentativa>0){
    cout << "Digite um numero de 1 a 1000: ";
    cin >> tentativaNumero;

    if(tentativaNumero > numeroCerto){

    cout << "O numero eh maior que o valor correto. \n" << endl;

    }
    else if(tentativaNumero < numeroCerto){

    cout << "O numero " << tentativaNumero <<
    " eh menor que o valor correto. \n" << endl;
    
    }
    else{

    cout << "O numero " << tentativaNumero <<
    " eh o correto. \n" << endl;

    break;
    }

    numTentativa --;

}
if (numTentativa == 0){

    cout << "Voce perdeu o jogo... \n" << endl;

}

return 0;

}