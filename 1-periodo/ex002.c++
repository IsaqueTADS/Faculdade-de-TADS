#include<iostream>
#include<locale.h>
#include<stdbool.h> // uso para system("cls")
#include<cstdlib> //uso para eexit()
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
        double years, days, qday, price,money,pcigarette;
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
            //calcula o pre�o de cada unidade de cigarro

            days = years * 365;
            //calcula quantidade de dias fumados


            money = (days * qday) * pcigarette;
            //calculo do valor gasto

            cout<<"Fumando por "<<years<<" anos voc� gastou "<<money<<" Reais"<<endl;

            

        }else {
            cout<<"Par�bens, tenha um otimo dia ??"<<endl;
        }
    
   


    return 0;
}