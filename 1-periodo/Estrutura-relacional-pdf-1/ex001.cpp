#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

        double bankbalance,transaction;

        cout<<"Digite o saldo existente em sua conta bancaria: "<<endl;
        cin>>bankbalance;
        cout<<"Agora digite o valor que deseja fazer o pix: "<<endl;
        cin>>transaction;

        if ( transaction <= bankbalance ){
            
            cout<<"Tranasa��o realizada com sucesso! "<<endl;

        }else {

            cout<<"Saldo insuficiente :( "<<endl;
        }



    return 0;
}