#include<iostream>
#include<locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

    float note;

    cout<<"Digite a sua nota: "<<endl;
    cin>>note;


    if ( note >= 90 && note <=100 ){

        cout<<"Nota A "<<endl;

    }else if ( note >= 80 && note <= 89){

        cout<<"Nota B "<<endl;

    }else if ( note >= 70 && note <= 79){

        cout<<"Nota C "<<endl;

    }else if ( note >= 60 && note <= 69 ){

        cout<<"Nota D"<<endl;

    }else if (  note < 60 && note >= 0 ){

        cout<<"Nota F "<<endl;

    }else{

        cout<<"Nota inv�lida! "<<endl;

    }






    return 0;
}