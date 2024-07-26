#include <iostream>
#include <locale.h>
#include <stdbool.h> //system("cls")
#include <cstdlib> //exit()

using namespace std;

int main (){

    setlocale(LC_ALL,"portuguese_Brazil");
    float number, varres;
    

    cout<<"Digite um número qualquer"<<endl;
    cin>>number;

    if ( number >= 0 ){

       varres = number * 2;

        cout<<"O dobro de "<<number<<" é "<<varres<<endl;

    } else {
        varres = number * 3;
        cout<<"O triplo de "<<number<<" é "<<varres<<endl;
    }

    return 0;
}
