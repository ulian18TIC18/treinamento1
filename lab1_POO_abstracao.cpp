#include <iostream>
#include <string>

using namespace std;

struct Jogo
{
    string nome;
    float preco, custo;
    int horas;;
};

Jogo adquirir(const string& titulo, float valor)
{
    Jogo novo;
    novo.nome = titulo;
    novo.preco = valor;
    novo.horas = 0;
    novo.custo = valor;
    return novo;
};

void atualizar(Jogo& jogo, float valor)
{
    jogo.preco = valor;

    if(jogo.horas > 0)
        jogo.custo = jogo.preco / jogo.horas;    
};

void jogar(Jogo& jogo, int tempo)
{
    jogo.horas += tempo;
    if(jogo.horas > 0)
        jogo.custo = jogo.preco/jogo.horas;
};

void exibir(const Jogo& jogo)
{
    cout << jogo.nome << ", R$ " << jogo.preco << ", " << jogo.horas 
    << " h e o novo custo foi de R$ " << jogo.custo << endl;
};



int main()
{
    //variavel do tipo Jogo
    Jogo marvelSnap;

    //chamado
    marvelSnap = adquirir("Marvel Snap", 50.00);       
    exibir(marvelSnap);

    jogar(marvelSnap, 5.00);
    exibir(marvelSnap);

    jogar(marvelSnap, 20.00);
    exibir(marvelSnap);

return 0;
};