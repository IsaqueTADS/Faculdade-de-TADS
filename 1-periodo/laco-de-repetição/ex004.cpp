#include <iostream>

using namespace std;

int main (){

    int nota;

    cout << " Digite uma nota de 0 a 10 "<<endl;
    do{
        cin>>nota;
        if(nota < 0 || nota > 10){
            cout<<"Nota invalida digite novamente "<<endl;
        }
    }while( nota < 0 || nota > 10 );
    
    cout<<"Nota aprovada: "<<nota<<endl;



    return 0;
}