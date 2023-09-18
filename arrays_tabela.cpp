#include <iostream>
#include <string>

using namespace std;

int main(){

    int n[10];

    for(int i = 0; i<=9; i++)
    n[i] = i;

    cout << "Elemento" << "\t" << "Índice" << "\t" << "Valor" << endl;

    for(int i = 0; i<10; i++)

    cout << i + 1 << "\t\t" << i << "\t" << i << endl;

    cout << "\n";


return 0;
}