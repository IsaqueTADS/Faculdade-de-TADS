#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");

    int options,amount,amountvalue;

    cout<<"CARDAPÍO DA CASA DOS DOGÃO "<<endl;
    cout<<"[100] Cachorro quente R$ 1.70"<<endl;
    cout<<"[101] Bauru Simples R$ 2.30"<<endl;
    cout<<"[102] Bauru com ovo R$ 2.60"<<endl;
    cout<<"[103] Hamburguer R$ 2.40 "<<endl;
    cout<<"[104] Cheeseburguer R$ 2.50 "<<endl;
    cout<<"[105] Refrigerante R$ 1.00"<<endl;
    cout<<"Digite o código referente ao lanche que\ndeseja!"<<endl;
    cin>>options;

    cout<<"Quandos você deseja comprar?? "<<endl;
    cin>>amount;

    switch (options){
        
        case 100:
        amountvalue = amount * 1.70;
        cout<<amount<<" Cachorro quente sai por "<<amountvalue<<" R$"<<endl;
        break;

        case 101:
        amountvalue = amount * 2.30;
        cout<<amount<<" Bauru Simples sai por "<<amountvalue<<" R$"<<endl;
        break;

        case 102:
        amountvalue = amount * 2.60;
        cout<<amount<<" Bauru com ovo sai por "<<amountvalue<<" R$"<<endl;
        break;

        case 103:
        amountvalue = amount * 2.40;
        cout<<amount<<" Hamburguer sai por "<<amountvalue<<" R$"<<endl;
        break;

        case 104:
        amountvalue = amount * 2.50;
        cout<<amount<<" Cheeseburguer sai por "<<amountvalue<<" R$"<<endl;
        break;

        case 105:
        amountvalue = amount * 1.00;
        cout<<amount<<" Refrigerante sai por "<<amountvalue<<" R$"<<endl;
        break;

        default:
        cout<<"Código inválido!! "<<endl;
        break;

    }



    return 0;
}