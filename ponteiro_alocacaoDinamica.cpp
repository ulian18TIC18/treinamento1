#include <iostream>

using namespace std;

int main(){

    int *pi = new int;
    * pi = 500;

    cout << "O valor de pi eh: " << *pi << endl;
    cout << "O tendereço de pi eh: " << pi << endl;

    double *pd = new double;
    * pd = 234.88;

    cout << "O valor de pd eh: " << *pd << endl;
    cout << "O endereço de pd eh: " << pd << endl;

    cout << "O tamanho de *pi, em bytes eh: " << sizeof(*pi) << endl; 
    cout << "O tamanho de pi, em bytes eh: " << sizeof(pi) << endl; 
    cout << "O tamanho de *pd, em bytes eh: " << sizeof(*pd) << endl; 
    cout << "O tamanho de pd, em bytes eh: " << sizeof(pd) << endl; 

return 0;
}