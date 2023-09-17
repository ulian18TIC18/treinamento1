#include <iostream>
#include <string>

using namespace std;

int main (){

    double nota, media, soma;
    int contador = 1;

    while (contador <=10)
    {
        cout << "Digite a nota do aluno: ";
        cin >> nota;

        soma = soma + nota;

        contador ++;

    }
    
    media = soma/10;

    cout << "\n" << "A media da turma com dez alunos foi: " <<
    media << "\n" << endl;

return 0;
}