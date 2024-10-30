#include <iostream>

using namespace std;

int main (){

    float base=0,expoente=0,potencia=1;

    cout<<"Digite a base "<<endl;
    cin>>base;
    cout<<"Digite o expoente "<<endl;
    cin>>expoente;

    for ( int i = 0 ; i < expoente ; i ++ ){

        potencia = potencia * base;
    }

    cout<<"Resultado: "<<potencia<<endl;


    return 0;
}