#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");

    int code;

    cout<<"Digite o código do programa!! "<<endl;
    cin>>code;

    switch ( code ){
        case 1:
        cout<<"Alimento não perecivel! "<<endl;
        break;
        
        case 2:
        cout<<"Alimento perecível! "<<endl;
        break;

        case 3:
        cout<<"Vestuário! "<<endl;
        break;

        case 4:
        cout<<"Vestuário! "<<endl;
        break;

        default:
        cout<<"Código inválido!! "<<endl;
    }



    return 0;
}