#include <iostream>
#include <climits>

using namespace std;

void segundoMaior(int num[], int _num){
    int i = 0, primeiro, segundo;

    if (_num < 2){
        cout << "Entrada invalida..." << endl;
        return; 
    }

    primeiro = segundo = INT_MIN;

    for (i = 0; i < _num; i++){

        if(num[i] > primeiro){
            segundo = primeiro;
            primeiro = num[i];
        }
        else if(num[i] > segundo && num[i] != primeiro){
            segundo = num[i];
        }        
    
    }
if(segundo == INT_MIN){
    cout << "Nao ha segundo elemento...";

}
else{
cout << "O segundo elemento eh: " << segundo;
}
}


int main(){

     int num[] = {13, 4, 234, 12, 9, 11}; 

     int n = sizeof(num)/sizeof(num[0]);

     cout << "O vetor original eh: ";

     for(int i = 0; i < n; i++)
     cout << num[i] << " ";

     segundoMaior(num, n);

     

return 0;
}
