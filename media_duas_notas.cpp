#include <iostream>
#include <string>

using namespace std;

int main(){
    
    float nota1, nota2, mediaNotas;

    cout << "Digite a primeira nota: " ;
    cin >> nota1;

    cout << "Digite a segunra nota: " ;
    cin >> nota2;

    mediaNotas = (nota1 + nota2)/2;

    cout << "A media em Matematica foi " << mediaNotas << " com as notas " <<
    nota1 << " e " << nota2 << endl;


return 0;
}