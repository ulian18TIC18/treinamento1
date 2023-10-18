#include <iostream>
#include <string>

using namespace std;

class Pessoa{
    private:
    string nome, pais;
    int idade;

    public:
    void setNome(string _nome){
        nome = _nome;
    }

    void setIdade(int _idade){
        idade = _idade;
        
    }
    void setPais(string _pais){
        pais = _pais;
    }

    string getNome(){
        return nome;
    }

    int getIdade(){
        return idade;
    }

    string getPais(){
        return pais;
    }


};

int main (){

    Pessoa pessoa;

    string nome, pais;
    int idade;

    cout << "Digite o nome: " << endl;
    cin >> nome;
    pessoa.setNome(nome);

    cout << "Digite idade: " << endl;
    cin >> idade;
    pessoa.setIdade(idade);

    cout << "Digite pais: " << endl;
    cin >> pais; 
    pessoa.setPais(pais);

    cout << pessoa.getNome() << endl;
    cout << pessoa.getIdade() << endl;
    cout << pessoa.getPais() << endl;

return 0;
}