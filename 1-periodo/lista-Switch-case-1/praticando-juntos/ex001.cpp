#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");

    int code;

    cout<<"Digite o c�digo do programa!! "<<endl;
    cin>>code;

    switch ( code ){
        case 1:
        cout<<"Alimento n�o perecivel! "<<endl;
        break;
        
        case 2:
        cout<<"Alimento perec�vel! "<<endl;
        break;

        case 3:
        cout<<"Vestu�rio! "<<endl;
        break;

        case 4:
        cout<<"Vestu�rio! "<<endl;
        break;

        default:
        cout<<"C�digo inv�lido!! "<<endl;
    }



    return 0;
}