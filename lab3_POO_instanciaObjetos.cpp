#include <iostream>
#include <string>

using namespace std;

class Jogo
{
    private:
        string nome;
        float preco, custo;
        int horas;

       void calcular()                                     
	{ 
		if (horas > 0)
			custo = preco / horas; 
	} 
        
    public:
        void adquirir(const string& titulo, float valor);
        void atualizar(float valor);
        void jogar(int tempo);
        void exibirValor();
        
};
  void Jogo::adquirir(const string& titulo, float valor)
{   
    nome = titulo;
    preco = valor;
    horas = 0;
    custo = preco;
}
    void Jogo::atualizar(float valor)
{
    preco = valor;
    calcular();
}
    void Jogo::jogar(int tempo)
{
    
    horas += tempo;
    calcular();

}
    void Jogo::exibirValor()
{
    cout << nome << " R$ " << preco << ", jogou por " << horas <<
    " h, com custo de R$ " << custo << "/h\n"; 
}


int main(){

    Jogo PUBG;
    Jogo DOOM;

    cout << "--------------------------------------------------\n";

    PUBG.adquirir("PUBD mobile", 100.00f);
    PUBG.jogar(6);
    PUBG.exibirValor();
    cout << "Endereco de memoria: " << &PUBG << "\n";

    cout << "--------------------------------------------------\n";

    DOOM.adquirir("DOOM 3", 50.00f);
    DOOM.jogar(2);
    DOOM.exibirValor();
    cout << "Endereco de memoria: " << &DOOM << "\n";

     cout << "--------------------------------------------------\n";

return 0;
}