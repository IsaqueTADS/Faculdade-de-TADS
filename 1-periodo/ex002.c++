#include<iostream>
#include<locale.h>
#include<stdbool.h> // uso para system("cls")
#include<cstdlib> //uso para eexit()
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    double years, months, qday, price,money,pcigarette;
    int opc;
    system("cls");
    cout<<"Voc� fuma?"<<endl;
    cout<<"[1] Sim\n";
    cout<<"[2] N�o\n";
    cin>>opc;
    system("cls");

    if ( opc == 1) {
        cout<<"Quantos anos de fumante voc� voc� tem? "<<endl;
        cin>>years;
        cout<<"Quantos cigarro voc� fuma por dia? "<<endl;
        cin>>qday;
        cout<<"Qual o pre�o da carteira com 20 cigarros? "<<endl;
        cin>>price;

        pcigarette = price / 20;

        qday *= pcigarette;

        months = years * 360;

        money = months *qday;

        cout<<"Fumando por "<<years<<" anos voc� gastou "<<money<<" Reais"<<endl;

        

    }else {
        cout<<"Parabens tenha um otimo dia ??";
    }
    
   


    return 0;
}