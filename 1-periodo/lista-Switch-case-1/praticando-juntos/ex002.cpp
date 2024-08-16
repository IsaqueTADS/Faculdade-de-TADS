#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");

    int options;
    float subway, centimeters;

    cout<<"CONVERSOR BRABO DE UNIDADES! "<<endl;
    cout<<"[1] Metros para  centimetros "<<endl;
    cout<<"[2] Quilogramas para gramas "<<endl;
    cout<<"[3] Horas para minutos  "<<endl;
    cin>>options;

    switch ( options ){
        
        case 1:
        cout<<"Digite o valor do metro "<<endl;
        cin>>subway;
        centimeters = subway * 100;
        cout<<subway<<"m da "<<centimeters<<" cm "<<endl;
        break;

        case 2:
        cout<<"Digite o valor do centimetro "<<endl;
        cin>>centimeters;
        subway = centimeters / 100;
        cout<<centimeters<<"cm da "<<subway<<" m "<<endl;
        break;

        case 3:
        int hour;
        float minutes;
        cout<<" Que hora deseja conveter para minutos? "<<endl;
        cin>>hour;
        minutes = 60 % hour;


        cout<< hour << "h são "<<hour*60<<"m "<<minutes<<" s"<<endl;

        default:
        cout<<"valor errado!! "<<endl;
        break;



    }



    return 0;
}