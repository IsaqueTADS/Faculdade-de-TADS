#include <iostream>

using namespace std;
#define PERCENTUAL_CHICO 0.02
#define PERCENTUAL_ZE 0.03

int main (){

    float chico = 1.50, ze = 1.10;
    int anos = 0;

    while ( chico > ze ){

        chico = chico + PERCENTUAL_CHICO;
        ze = ze + PERCENTUAL_ZE;
        anos++;
    }

    cout<<"Tamanho chico: "<<chico<<endl;
    cout<<"Tamanho ze: "<<ze<<endl;
    cout<<"Anos: "<<anos<<endl;

    return 0;
}