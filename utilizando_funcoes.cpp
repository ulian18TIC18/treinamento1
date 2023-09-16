#include <iostream>

using namespace std;

int horaAtual (){

    time_t t = time(nullptr);
    tm* now = localtime (&t);
    return now -> tm_hour;
}

void cumprimenta (string nome){

    if ((horaAtual() >=1) && (horaAtual() <12))
    {
        cout << "Bom dia" << nome << ", " << endl;
    }
    else if ((horaAtual() >=12) && (horaAtual() <18))
    {
        cout << "Boa tarde" << nome << ", " << endl;
    }
    else 
    {
        cout << "Boa noite" << nome << ", " << endl;
    }

}

int main (void) {

string nome;
int anoNascimento;

cumprimenta(nome);

cout << "Digite o sue nome: ";
cin >> nome;

cout << nome << ", tenha um otimo curo." << endl;

cout << nome << ", em que ano voce nasceu? ";
cin >> anoNascimento;

cout << "Considerando o ano de 2023, voce tem " 
     << 2023-anoNascimento 
     << " anos, ou esta proximo de fazer. \n" << endl; 

return 0;
}
