#include <iostream>

using namespace std;


int main (){

    int opc;
   
    cout<<"MENU DE OOPCAO"<<endl;
    cout<<"[1] CALCULAR MEDIA ARITIMETICA "<<endl;
    cout<<"[2] CALCULAR MEDIA PONDERADA "<<endl;
    cout<<"[3] SAIR "<<endl;
    cout<<"Escolha uma das opcao assima! "<<endl;
    cin>>opc;
    while ( opc < 1 || opc > 3){
        cout<<"[ERRO] Digite novamnte! "<<endl;
        cout<<"[1] CALCULAR MEDIA ARITIMETICA "<<endl;
        cout<<"[2] CALCULAR MEDIA PONDERADA "<<endl;
        cout<<"[3] SAIR "<<endl;
        cout<<"Escolha uma das opcao assima! "<<endl;
        cin>>opc;
    }
    float nota1 = 0, nota2 = 0, mediaAri = 0, quantiNotas = 2;
    float nota = 0,notaPeso = 0, peso = 0, somaPeso = 0, mediaPon = 0;

    switch (opc){

        case 1:

            cout<<"Digite a nota 1 "<<endl;
            cin>>nota1;
            cout<<"Digite a nota 2 "<<endl;
            cin>>nota2;

            mediaAri =  (nota1 + nota2) / quantiNotas;

            cout<<"Nota 1: "<<nota1<<endl;
            cout<<"Nota 2: "<<nota2<<endl;
            cout<<"A media e: "<<mediaAri<<endl;

            break;
        case 2:


        for (int i = 0; i < 3; i ++){
            cout<<"Digite o valor da nota "<<i+1<<endl;
            cin>>nota;
            cout<<"Digite o peso da nota "<<i+1<<endl;
            cin>>peso;

            nota = nota * peso;
            notaPeso = notaPeso + nota;
            somaPeso += peso;
        }
        
        mediaPon = notaPeso / somaPeso;  
        cout<<"Resultado da media ponderada: "<<mediaPon<<endl;

        break; 
        case 3:
        cout<<"PROGAMA ENCERRADO "<<endl;

        break; 
    }



    return 0;
}