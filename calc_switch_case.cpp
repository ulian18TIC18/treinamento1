#include <iostream>

using namespace std;

int main (){

    char operacao;
    double num1, num2;

    cout << "Digite uma operacao: " ;
    cin >> operacao;

    cout << "Digite dois numeros: " << endl;
    cin >> num1 >> num2;

switch (operacao){
    
    case '+':
        cout << "Resultado: " << num1 + num2 << endl;
        break;

    case '-':
        cout << "Resultado: " << num1 - num2 << endl;
        break;

    case '*':
        cout << "Resultado: " << num1 * num2 << endl;
        break;
    
    case '/':
        if (num2 != 0){
        cout << "Resultado: " << num1 / num2 << endl;

        }

        else{
        cout << "Numero invalido \n" << endl;
        
        }
        break;

}
return 0;
}
