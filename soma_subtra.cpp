#include <iostream>

using namespace std;

int main(){

    int numero, antecessor, sucessor;

    cout << "Digite numero inteiriro: \n";
    cin >> numero;

    antecessor = numero--;
    sucessor = numero++;

    cout << "O seu antecessor eh: \n" << antecessor << endl;
    cout << "O seu sucessor eh: \n" << sucessor << endl;

return 0;
}