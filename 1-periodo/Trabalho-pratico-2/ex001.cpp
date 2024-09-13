#include <iostream>

using namespace std;

int main (){

    int clientes = 3;

    float valorCompras = 0, descontoAplicado = 0, valorDescontado = 0;

    for ( int i = 1; i <= clientes; i ++ ){
        cout<<"Digite o valor das compras do cliente: "<<i<<endl;
        cin>>valorCompras;
        if ( valorCompras > 1000 ){
            descontoAplicado = valorCompras - ( valorCompras * 0.15);
            valorDescontado = ( valorCompras * 0.15);
            cout<<"Valor da compra: "<<valorCompras<<"\nCom desconto de 15%: "<<descontoAplicado<<"\nValor do Desconto: "<<valorDescontado<<endl;
        }else {
            descontoAplicado = valorCompras - ( valorCompras * 0.1);
            valorDescontado = ( valorCompras * 0.1);
            cout<<"Valor da compra: "<<valorCompras<<"\nCom desconto de 10%: "<<descontoAplicado<<"\nValor descontado: "<<valorDescontado<<endl;

        }
    }



    return 0;
}