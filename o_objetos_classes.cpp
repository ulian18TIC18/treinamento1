#include <iostream>
#include <string>

using namespace std;

// Classe Pessoa
class Pessoa {
private:
    string RG;
    string CPF;
    string dataNascimento;

public:
    // Construtor padrão
    Pessoa() {
        RG = "";
        CPF = "";
        dataNascimento = "";
    }

    // Construtor parametrizado
    Pessoa(string novoRG, string novoCPF, string novaDataNascimento) {
        RG = novoRG;
        CPF = novoCPF;
        dataNascimento = novaDataNascimento;
    }

    // Método para exibir informações da Pessoa
    void exibirInfoPessoa() {
        cout << "RG: " << RG << endl;
        cout << "CPF: " << CPF << endl;
        cout << "Data de Nascimento: " << dataNascimento << endl;
    }
};

// Classe Veiculo
class Veiculo {
private:
    string marca;
    string placa;
    string cor;

public:
    // Construtor padrão
    Veiculo() {
        marca = "";
        placa = "";
        cor = "";
    }

    // Construtor parametrizado
    Veiculo(string novaMarca, string novaPlaca, string novaCor) {
        marca = novaMarca;
        placa = novaPlaca;
        cor = novaCor;
    }

    // Método para exibir informações do Veiculo
    void exibirInfoVeiculo() {
        cout << "Marca do Veiculo: " << marca << endl;
        cout << "Placa: " << placa << endl;
        cout << "Cor: " << cor << endl;
    }
};

int main() {
    
    // Criando objetos da classe Pessoa
    Pessoa pessoa1; // Usando o construtor padrão
    Pessoa pessoa2("1234567", "987654321", "01/01/1990"); // Usando o construtor parametrizado

    // Exibindo informações da Pessoa
    cout << "Informacoes da Pessoa 1:" << endl;
    pessoa1.exibirInfoPessoa();

    cout << "\nInformacoes da Pessoa 2:" << endl;
    pessoa2.exibirInfoPessoa();

    // Criando objetos da classe Veiculo
    Veiculo veiculo1; // Usando o construtor padrão
    Veiculo veiculo2("Toyota", "ABC1234", "Preto"); // Usando o construtor parametrizado

    // Exibindo informações do Veiculo
    cout << "\nInformacoes do Veiculo 1:" << endl;
    veiculo1.exibirInfoVeiculo();

    cout << "\nInformacoes do Veiculo 2:" << endl;
    veiculo2.exibirInfoVeiculo();

    return 0;
}
