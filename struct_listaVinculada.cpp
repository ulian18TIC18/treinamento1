#include <iostream>

using namespace std;

struct Lista
{
    int num1;
    Lista *proximo;
};

Lista *titulo = NULL;

void inserirValor(int num1_)
{
    Lista *novoNum1 = new Lista;

    novoNum1->num1 = num1_;
    novoNum1->proximo = titulo;
    titulo = novoNum1;
}

void mostrarTodos()
{
    cout << "\nListar todos os elementos:" << endl;

    Lista *alocacao = titulo;

    while (alocacao != NULL)
    {
        cout << alocacao -> num1 << " ";
        alocacao = alocacao -> proximo;
    }

    cout << endl;    
}

int main ()
{
    inserirValor(40);
    inserirValor(4);
    inserirValor(5);
    inserirValor(15);
    inserirValor(25);
    inserirValor(54);
    inserirValor(12);

    mostrarTodos();
    return 0;
}