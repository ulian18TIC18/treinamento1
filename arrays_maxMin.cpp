#include <iostream>
#include <algorithm>

using namespace std;

int encontrandoMaiorElemento (int num[], int n){
    return *max_element(num, num + n);

}
int menorElemento (int num[], int n){
    return *min_element (num, num + n);
}

int main(){

    int num[] = {123, 4, 234, 12, 9, 11};

    int n = sizeof(num) / sizeof(num[0]); 

    cout << "Array original: ";

    for (int i = 0; i < n; i++){
    cout << num[i] << " ";
    }

    cout << "\nO maior elemento do Array eh: " << encontrandoMaiorElemento (num, n);
    cout << "\nO menor elemento do Array eh: " << menorElemento (num, n);

return 0;
}