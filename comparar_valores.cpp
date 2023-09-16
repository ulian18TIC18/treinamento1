#include <iostream>

using namespace std;

int test(int n){

    const int x = 51;

    if (n>x){

    return(n-x)*3;

    }
    
    return x-n;

}

int main(){

    cout << test(55) << endl;
    cout << test(30) << endl;
    cout << test(51) << endl;

return 0;

}