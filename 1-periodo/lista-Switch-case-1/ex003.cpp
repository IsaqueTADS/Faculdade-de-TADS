#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");

    int options;
    float balance,deposit,towithdraw;

    cout<<"Qual seu saldo atual?? "<<endl;
    cin>>balance;

    system ("cls");

    cout<<"BANCO DO GOLPE URUBU PIXI "<<endl;
    cout<<"[1] Consultar saldo "<<endl;
    cout<<"[2] Depositar dinheiro "<<endl;
    cout<<"[3] Sacar dinheiro "<<endl;
    cin>>options;

    switch ( options ){

        case 1:
        cout<<"Saldo atual: "<<balance<<" R$"<<endl;
        break;

        case 2:
        cout<<"Qual valor deseja depositar? "<<endl;
        cin>>deposit;
        balance += deposit;
        cout<<"Deposito confirmado com sucesso "<<endl;
        cout<<"Saldo atual: "<<balance<<endl;
        break;

        case 3:
        cout<<"Quanto você deseja sacar? "<<endl;
        cin>>towithdraw;

        if ( towithdraw <= balance ){
            cout<<"Saque confirmado "<<endl;
            balance -= towithdraw;
            cout<<"Saldo restante: "<<balance<<endl;
        }else{
            cout<<"Saldo insuficiente"<<endl;
        }
        break;
    }





    return 0;
}