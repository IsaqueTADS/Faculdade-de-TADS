#include <iostream>


using namespace std;

int main (){

    float niveSas = 0, contIn = 0, contExc = 0, contTo = 0,soma = 0;

    cout<<"NIVEL DE SASTIFACAO"<<endl;
    cout<<"[1] muito insatifeito "<<endl;
    cout<<"[2] insastifeito  "<<endl;
    cout<<"[3] mediano "<<endl;
    cout<<"[4] bom "<<endl;
    cout<<"[5] excelente"<<endl;
    do { cin>>niveSas;

     if ( niveSas < 0 || niveSas > 5){
            cout<<"[ERRO] O nivel de sastifacao tem quer de 1 a 5 "<<endl;
            break;
        }
        
        contTo++;

        soma = soma + niveSas;

        if ( niveSas == 1 ){
            contIn++;
        }
        if ( niveSas == 5 ){
            contExc++;
        }


    }while ( niveSas > 0 || niveSas < 5 );
        
       
    

    cout<<"Muito Insatifeito "<<contIn<<endl;
    cout<<"Excelente "<<contExc<<endl;
    float media = soma / contTo;

    cout<<"Media: "<<media<<endl;



    return 0;
}