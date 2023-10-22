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
        cout << nome << " R$ " << preco << " " << horas <<
         " h, com custo de R$ " << custo << "/h\n"; 
}




int main()
{
    Jogo superMario;

    superMario.adquirir("Super Mario Word", 200.00f);
    superMario.exibirValor();

    superMario.jogar(5);
    superMario.exibirValor();

    superMario.jogar(10);
    superMario.exibirValor();

return 0;   
}