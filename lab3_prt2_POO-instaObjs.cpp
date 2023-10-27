#include <iostream>

using namespace std;

struct Coordenadas
{
    int x, y;

    void deslocamento(int dx, int dy);
    void moverPara(int px, int py);
};

void Coordenadas::deslocamento(int dx, int dy)
{
    x += dx;
    y += dy;
}

void Coordenadas::moverPara(int px, int py)
{
    x = px;
    y = py;
}


int main()
{

    Coordenadas ponto1;

    ponto1.moverPara(5, 5);
    cout << "O ponto (" << ponto1.x << ", " << ponto1.y <<") " << endl;

    ponto1.deslocamento(4, 8);
    cout << "O ponto (" << ponto1.x << ", " << ponto1.y <<") " << endl;   

return 0;
}