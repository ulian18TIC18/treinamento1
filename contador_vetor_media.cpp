#include <iostream>
#include <string>

using namespace std;

int main () {

    int notas[10];
    double soma;
    double media;

    for (int i=0; i<10 ; i++){

        cout << "Digite a nota do aluno " << i + 1 << ": " ;
        cin >> notas[i];

        soma += notas[i];

    }

    media = soma/10;

    cout << "A media das notas dos alunos eh igual a: " 
    << media << "\n" << endl;

return 0;
}