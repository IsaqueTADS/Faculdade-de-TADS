#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");

    int options;

    cout<<"CARDAPÍO "<<endl;
    cout<<"[1] prato principais "<<endl;
    cout<<"[2] bebidas "<<endl;
    cout<<"[3] sobremesas "<<endl;
    cin>>options;

    switch ( options ){

        case 1:

        cout<<"Strogonoff 15R$ "<<endl;
        cout<<"feijoada 25R$ "<<endl;
        cout<<"risoto 15R$ "<<endl;
        cout<<"torta 15R$ "<<endl;
        cout<<"Pizza 45R$ "<<endl;

        break;

        case 2:

        cout<<"Refrigerantes 2L 12R$ "<<endl;
        cout<<"Refrigerantes latinhas 5R$ "<<endl;
        cout<<"Coca cola 2L 15R$ "<<endl;
        cout<<"Coca cola latinha 6R$ "<<endl;
        cout<<"Suco do valley 1L 5R$ "<<endl;

        break;

        case 3:

        cout<<"Açai 500Ml 17R$ "<<endl;
        cout<<"Açai 700l 21R$ "<<endl;
        cout<<"Bolo de chuva 10R$ "<<endl;
        cout<<"Bolos em geral 10-25R$ "<<endl;
        cout<<"Sorvetes 10-30R$ "<<endl;


        break;
    }
    




    return 0;
}