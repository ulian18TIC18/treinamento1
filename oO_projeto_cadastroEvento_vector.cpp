#include <iostream>
#include <vector>

using namespace std;

class Evento{
    private:
    string nome, descricao;

    public:
    void cadastroEvento(string nome_, string descricao_)
    {
        nome = nome_;
        descricao = descricao_;
    };
};
//class Roteiro : public Evento
{
    private:
    vector<string> destinos;

    public:
    Roteiro(string nome_, string descricao_, vector<string> destino_) : Evento(nome_, descricao_)
    {
        destinos = destino_;
    }

};


int main()
{


    return 0;
}