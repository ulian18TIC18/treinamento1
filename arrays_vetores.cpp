#include <iostream>

using namespace std;

int main (void) {

    double val[5] = {1.5, 2.5, 3.3, 4.2, 5.1};
    double soma = 0;
    int j = 0;

    for (int i = 0; i < 5; i++){

        soma += val[i];

    }

    while (j < 5){

        cout <<"Os indices em ordem: " << val[j] << endl;
        j++;
        
    }
        
    cout << "A soma dos elementos eh: " << soma << endl;
    cout << "\n";

    cout << "O tamanho do valor var eh: " << sizeof(val) << endl;
    cout << "\n"; 


return 0;

}