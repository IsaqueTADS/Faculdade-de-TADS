#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

    int age;


    cout<<"Digite a idade do atleta (NADADOR)! "<<endl;
    cin>>age;

    if ( age >= 5 && age <= 7 ){

        cout<<"Atleta infantil (A)! "<<endl;

    }else if ( age >= 8 && age >= 10){

        cout<<"Atleta infntil (B) "<<endl;

    }else if ( age >=11 && age <= 13){

        cout<<"Atleta juvenil (A) "<<endl;

    }else if( age >= 14 && age <= 17 ){

        cout<<"Atleta juvenil (B) "<<endl;

    }else if ( age >= 18 ){

        cout<<"Adulto! "<<endl;
    }else{
        cout<<"Idade invalida "<<endl;
    }




    return 0;
}