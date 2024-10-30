#include <iostream>

using namespace std;

int main (){

    int number = 0;
    float soma = 0,contador = 0,media = 0;
    do{
        cout<<"Digite um numero que seja maior que 0 "<<endl;
        cin>>number;
        soma = soma + number;
        contador++;

    }while( number > 0 );

    media = soma / (contador - 1.0);

    cout<<"Soma: "<<soma<<endl;
    cout<<"Contador: "<<contador<<endl;
    cout<<"Media: "<<media<<endl;

    return 0;
}