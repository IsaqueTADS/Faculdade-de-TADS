#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");
    int options;

    cout<<"Qual m�s voc� deseja saber a quantidade de dias?? "<<endl;
    cin>>options;

    switch ( options ){

        case 2:

        cout<<"M�s "<<options<<" tem 28 dias "<<endl;
        break;

        case 4:
        case 6:
        case 9:
        case 11:

        cout<<"M�s "<<options<<" tem 30 dias "<<endl;
        break;

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

         cout<<"M�s "<<options<<" tem 31 dias "<<endl;
         break;

        default:

        cout<<options<<" N�o � valido como numera��o dos m�ses\n Digite novamente! "<<endl;










    }




    return 0;
}