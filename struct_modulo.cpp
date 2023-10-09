#include <iostream>

using namespace std;

struct Data {
    int dia, mes, ano;
};

bool dataValida(int dia, int mes, int ano){
       if (ano < 1900 || ano > 2200) {         
        return false; 
        }
    if (dia < 1 || dia > 31){
        return false;
    }
    if (mes < 1 || mes > 12){
        return false;
    }

    int qtdDiasMes = 0;
    
    if (mes == 2){
        qtdDiasMes = 28;

    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11 ){       
        qtdDiasMes = 30;

    }
    else{
        qtdDiasMes = 31;

    }

    if (dia < 1 || dia > qtdDiasMes){
        return false;
    }
         
    return true;
}

/*bool dataValida(struct Data data){
    return dataValida(data.dia, data.mes, data.ano);
}*/


struct Data inicializandoData(int dia, int mes, int ano){
    Data data;

        if(dataValida(dia, mes , ano)){

            data.dia = dia;
            data.mes = mes;
            data.ano = ano;

        }
        else{
            cout << "Data invalida! A nova data passa a ser..." << endl; 

            data.dia = 1;
            data.mes = 1;
            data.ano = 1901;

        }

return data;
};


int main (){   

    int dd, mm, aaaa;

    cout << "Digite o dia: ";
    cin >> dd;
    cout << "Digite o mes: ";
    cin >> mm;
    cout << "Digite o ano: ";
    cin >> aaaa;

    Data data = inicializandoData(dd,mm,aaaa);    

    cout << data.dia << "/" << data.mes << "/" << data.ano;
    
return 0;
}