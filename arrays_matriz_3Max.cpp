#include <iostream>
#include <climits>

using namespace std;

void tresPrimeirosNum (int num1[], int num1_size){ 
    int i, primeiro, segundo, terceiro;

    if(num1_size < 3){
        cout << "Entrada invalida";
    }

    terceiro = segundo = primeiro = INT_MIN;

    for (i = 0; i < num1_size; i++){

        if (num1[i] > primeiro){
            terceiro = segundo;
            segundo = primeiro;
            primeiro = num1[i];

        }
        else if(num1[i] > segundo){
            terceiro = segundo;
            segundo = num1[i];
        }

        else if (num1[i] > terceiro){
             terceiro = num1[i];
        }

    
    }
    cout << "\nOs tres maiores numeros no Array, em ordem, sao: " 
    << primeiro << " " << segundo <<
     " " << terceiro << endl;
   
}

int main(){

    int num[] = {13, 4, 234, 12, 9, 11};  

    int n = sizeof(num)/sizeof(num[0]);

    cout << "O Array original eh: ";
    
    for(int i = 0; i < n; i++){
        cout << num[i] << " ";        
    }

    tresPrimeirosNum(num, n);

return 0;
}