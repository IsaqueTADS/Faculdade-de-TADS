#include <iostream>

using namespace std;

int main (){

    int clientes = 15;

    float valorCompras = 0, descontoAplicado = 0;

    for ( int i = 1; i <= clientes; i ++ ){
        cout<<"Digite o valor das compras do cliente: "<<i<<endl;
        cin>>valorCompras;
        if ( valorCompras > 1000 ){
            descontoAplicado = valorCompras - ( valorCompras * 0.15);
            cout<<"Valor da compra: "<<valorCompras<<"\nDesconto de 15%: "<<descontoAplicado<<endl;
        }else {
            descontoAplicado = valorCompras - ( valorCompras * 0.1);
            cout<<"Valor da compra: "<<valorCompras<<"\nDesconto de 10%: "<<descontoAplicado<<endl;

        }
    }



    return 0;
}