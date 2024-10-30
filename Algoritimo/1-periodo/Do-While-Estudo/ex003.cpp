#include <iostream>
#include <cmath>

using namespace std;

int main (){

    float base = 0,expoente = 0,res = 0;
    int i = 1;

    do {
        cout<<i<<" Digite a base: "<<endl;
        cin>>base;
        cout<<"Digite o expoente: "<<endl;
        cin>>expoente;

        res = pow (base,expoente);
        cout<<"Coma base: "<<base<<" e expoente: "<<expoente<<" O resultado sera: "<<res<<endl;
        i++;

    }while ( i <= 7);


    return 0;
}