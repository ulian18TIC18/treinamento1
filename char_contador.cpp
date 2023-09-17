#include <iostream>
#include <cstring>

using namespace std;

int main (){

    int aQtd = 0, bQtd = 0, cQtd = 0, dQtd = 0, eQtd = 0, fQtd = 0;
    char nota;

    do{
    cout << "Digite a nota do aluno: ";
    cin >> nota;

    switch (nota){
    
    case 'A':
        aQtd ++ ;
        break;
    case 'B':
        bQtd ++ ;
        break;
    case 'C':
        cQtd ++ ;
        break;
    case 'D':
        dQtd ++ ;
        break;
    case 'E':
        eQtd ++ ;
        break;
    case 'F':
        fQtd ++ ;
        break;
    
    default: 
    
    cout << "Nota invalida" << endl;    
        
    }


    cout << "Digite uma nota: " ;
    cin >> nota;
    }

    while (nota == 'S' || nota == 's');

        cout << "Numero de alunos que obtiveram a nota: \n" << endl;

        cout << "A quantidade de A foi: " << aQtd << endl;
        cout << "A quantidade de B foi: " << bQtd << endl;
        cout << "A quantidade de C foi: " << cQtd << endl;
        cout << "A quantidade de D foi: " << dQtd << endl;
        cout << "A quantidade de E foi: " << eQtd << endl;
        cout << "A quantidade de F foi: " << fQtd << "\n" << endl;


return 0;

}