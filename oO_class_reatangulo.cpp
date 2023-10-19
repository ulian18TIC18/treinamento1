#include <iostream>

using namespace std;

class Retangulo{
    public:
    double base, altura;

    public:
    Retangulo(double _base, double _altura) : base(_base), altura(_altura){}

    double calArea(){
        return base*altura;
    }

    double calPerimetro(){
        return (base+altura)*2;
    }

};


int main (){

    double base, altura;

    cout << "Digite o valor da base: ";
    cin >> base;

    cout << "Digite o valor da altura: ";
    cin >> altura;

    Retangulo retangulo(base, altura);

    double area = retangulo.calArea();
    cout << "A area do retangulo eh: " << area << " m^2" << endl;

    double perimetro = retangulo.calPerimetro();
    cout << "O primetro do retangulo eh: " << perimetro << " m" << endl;


return 0;
}