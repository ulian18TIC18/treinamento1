#include <iostream>
#include <cmath>

using namespace std;

int main (){

    int numero, menorNum = 10000, ocorrencias = 0, soma = 0;
    float media;
    bool limites = false;

    for (int i = 0; i <= 4; i++){

        cout << "Digite um numero entre 1 e 100: ";
        cin >> numero;
        
        soma += numero;
       
        if (numero < menorNum){
            
            menorNum = numero;
            
        }
        if(numero > 5 && numero < 10){
            ocorrencias ++;

        }
    }
    media = soma/5.0;
    
    cout << "\nO menor numero eh: " << menorNum << endl;
    cout << "A media eh igual a " << media << endl;
    cout << "Foram digitados " << ocorrencias << " numeros entre 5 e 10" << endl;   


return 0;
}