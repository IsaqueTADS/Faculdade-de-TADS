#include <iostream>
#include <locale.h>
#include <stdbool.h> //system("cls")
#include <cstdlib> //exit()

using namespace std;

int main (){

    setlocale(LC_ALL,"portuguese_Brazil");
    float number, respos, resnega;

    cout<<"Digite um número qualquer"<<endl;
    cin>>number;

    if( number %2 == 0){

        respos = number * 2;

        cout<<"O dobro de "<<number<<" é "<<respos<<endl;

    }else{
        resnega = number * 3;
        cout<<"O triplo de "<<number<<" é "<<resnega<<endl;
    }

    return 0;
}
