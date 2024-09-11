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
        cout<<"Você fuma?"<<endl;
        cout<<"[1] Sim\n";
        cout<<"[2] Não\n";
        cin>>opc;
        system("cls");

        if ( opc == 1) {
            cout<<"Quantos anos de fumante você você tem? "<<endl;
            cin>>years;
            cout<<"Quantos cigarro você fuma por dia? "<<endl;
            cin>>qday;
            cout<<"Qual o preço da carteira com 20 cigarros? "<<endl;
            cin>>price;

            pcigarette = price / 20;
            //calcula o preço de cada unidade de cigarro

            days = years * 365;
            //calcula quantidade de dias fumados


            money = (days * qday) * pcigarette;
            //calculo do valor gasto

            cout<<"Fumando por "<<years<<" anos você gastou "<<money<<" Reais"<<endl;

            

        }else {
            cout<<"Parábens, tenha um otimo dia ??"<<endl;
        }
    
   


    return 0;
}