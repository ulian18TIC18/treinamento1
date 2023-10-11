#include <iostream>
#include <cmath>

using namespace std;

class Circulo{
    private:
    double raio;

    public:
    Circulo(double area) : raio(area){}

    double calArea(){
        return raio*raio*3.14159265358;
    }

    double calPerimetro(){
        return 2*raio*3.14159265358;
    }
};


int main (){

    double raio;

    cout << "Digite o valor do raio: " ;
    cin >> raio;

    Circulo circulo(raio);

    double area = circulo.calArea();
    cout << "A area da circulo eh: " << area << " m^2" << endl;

    double perimetro = circulo.calPerimetro();
    cout << "O perimento do circulo eh: " << perimetro << " m" << endl;

return 0;
}