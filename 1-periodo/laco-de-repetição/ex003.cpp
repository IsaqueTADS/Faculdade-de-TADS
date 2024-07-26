#include <iostream>

using namespace std;

int main (){

    float base=0,expoente=0;

    cout<<"Digite a base "<<endl;
    cin>>base;
    cout<<"Digite o expoente "<<endl;
    cin>>expoente;

    for ( int i = 1 ; i < expoente ; i ++ ){
        base *=expoente;
    }

    cout<<"Resultado: "<<base<<endl;


    return 0;
}