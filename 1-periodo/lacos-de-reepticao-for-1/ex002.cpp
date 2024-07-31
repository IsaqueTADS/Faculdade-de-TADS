#include <iostream>


using namespace std;

int main (){

    int acidentes,contacidente = 0, maior = -4, menor = 10000000;

    for ( int i = 1 ; i <= 5 ; i ++ ){
        
    cout <<"Digite a quantidade de aciedentes de transito na cidade: "<<i<<endl;
    cin>>acidentes;

    contacidente = contacidente + acidentes;

    if ( acidentes > maior ){
        maior = acidentes;
    }
    if ( acidentes < menor ){
        menor = acidentes;
    }
    }

    float media = contacidente / 5;
    
    cout<<"A quantidade de acidentes nas 5 cidade e: "<<contacidente<<"\nE a media entre as cidades e: "<<media<<"\nMenor valor: "<<menor<<"\nMaior valor: "<<maior<<endl;

    return 0;
}