#include <iostream>
#include <locale.h>
#include <stdbool.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

        int option;
        float heigth, iweight;

        cout<<"Digite \n[1] HOMEM\n[2] MULHER\nEscolha um das op��es acima :-) "<<endl;
        do {cin>>option;
            
            if ( option != 1 && option != 2 ){
                
                system("cls");

                 cout<<"Digite \n[1] HOMEM\n[2] MULHER\n";
                 cout<<"[ERRO] N�mero inv�lido\nPor favor escolha novamente!"<<endl;

            }


        }while ( option != 1 && option != 2 );
        
        system("cls");
        
        cout<<"Digite sua altura: "<<endl;
        cin>>heigth;

        if ( option == 1){

            iweight = (72.7 * heigth) -58;
            
            cout<<"[H] O peso ideal para voc� � de "<<iweight<<endl;

        }else{

            iweight = (62.1 * heigth) - 44.7;

            cout<<" [M] O peso ideal para voc� � de "<<iweight<<endl;

        }

           

        
        



    return 0;
}