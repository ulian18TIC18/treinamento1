#include <iostream>

using namespace std;

class Car{
    private:
    string empresa, modelo;
    int ano;

    public:
    void setEmpresa(string _empresa){
        empresa = _empresa;
    };
    void setModelo(string _modelo){
        modelo = _modelo;
    };
    void setAno(int _ano){
        ano = _ano;
    }

    string getEmpresa(){
        return empresa;
    }

    string getModelo(){
        return modelo;
    }

    int getAno(){
        return ano;
    }


};


int main(){

    Car car;

    string empresa, modelo;
    int ano;

    cout << "Digite a Fabricante: " << endl;
    cin >> empresa;

    cout << "Digite o modelo do carro: " << endl;
    cin >> modelo;

    cout << "Dite o ano: " << endl;
    cin >> ano;

    car.setEmpresa(empresa);
    car.setModelo(modelo);
    car.setAno(ano);

    cout << "\nO Fabricante eh: " << car.getEmpresa() << endl;
    cout << "O modelo de fabricacao eh: " << car.getModelo() << endl;
    cout << "O ano de fabricacao foi: " << car.getAno() << endl;
    
return 0;
}