#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double pi = 3.14159265;
   
    cout << fixed << setprecision(5) << endl;
    cout << "Pi com cinco casas decimais: " << pi;
    
    cout << scientific << endl;
    cout << "Pi em potencia: " << pi << endl;

    bool alfabeto;

    cout << boolalpha;
    cout << "Pi pertentece ao alfabeto?: " << alfabeto << endl;
    cout << endl;

return 0;
}