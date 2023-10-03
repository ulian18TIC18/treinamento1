#include <iostream>
#include <vector>
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
    Pessoa() : RG(""), CPF(""), dataNascimento("") {}

    // Construtor parametrizado
    Pessoa(const string& novoRG, const string& novoCPF, const string& novaDataNascimento)
        : RG(novoRG), CPF(novoCPF), dataNascimento(novaDataNascimento) {}

    // Método para exibir informações da Pessoa
    void exibirInfoPessoa() const {
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
    Veiculo() : marca(""), placa(""), cor("") {}

    // Construtor parametrizado
    Veiculo(const string& novaMarca, const string& novaPlaca, const string& novaCor)
        : marca(novaMarca), placa(novaPlaca), cor(novaCor) {}

    // Método para exibir informações do Veiculo
    void exibirInfoVeiculo() const {
        cout << "Marca do Veiculo: " << marca << endl;
        cout << "Placa: " << placa << endl;
        cout << "Cor: " << cor << endl;
    }
};

int main() {
    
    // Vetores para armazenar objetos das classes Pessoa e Veiculo
    vector<Pessoa> pessoas;
    vector<Veiculo> veiculos;

    // Cadastro de pessoas
    pessoas.push_back(Pessoa("1234567", "987654321", "01/01/1990"));
    pessoas.push_back(Pessoa("7654321", "123456789", "02/02/1985"));

    // Cadastro de veiculos
    veiculos.push_back(Veiculo("Toyota", "ABC1234", "Preto"));
    veiculos.push_back(Veiculo("Honda", "XYZ5678", "Branco"));

    // Exibindo informações das pessoas
    cout << "Informacoes das Pessoas:" << endl;
    for (const auto& pessoa : pessoas) {
        pessoa.exibirInfoPessoa();
        cout << "-------------------------" << endl;
    }

    // Exibindo informações dos veiculos
    cout << "\nInformacoes dos Veiculos:" << endl;
    for (const auto& veiculo : veiculos) {
        veiculo.exibirInfoVeiculo();
        cout << "-------------------------" << endl;
    }

    return 0;
}