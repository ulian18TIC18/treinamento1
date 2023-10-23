#include <iostream>

using namespace std;

class Ponto 
{
    private:
    int x, y;

    public:
    void deslocamento(int dx, int dy);
    void moverPara(int px, int py);

    inline int getX(){return x;} //Método inline
    inline int getY(){return y;} //Método inline

};

void Ponto::deslocamento(int dx, int dy){
    x += dx;
    y += dy;
}

void Ponto::moverPara(int px, int py){
    x = px;
    y = py;
}

int main(){

    Ponto p;

    cout << "Espaco de memoria: " << sizeof (p) << endl;

    p.moverPara(10, 11);
    cout << "O ponto esta em (" << p.getX() << ", " << p.getY() << ")\n";

    p.deslocamento(5, 8);
    cout << "E se deslocou para (" << p.getX() << ", " << p.getY() << ")\n";

return 0;
}