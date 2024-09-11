#include <iostream>
#include <locale.h>
#include <stdbool.h> //system("cls")
#include <cstdlib> //exit()

using namespace std;

int main (){

    setlocale(LC_ALL,"portuguese_Brazil");

        int number,inumber,pnumber;

        cout<<"Digite um numero qualquer que seja inteiro "<<endl;
        cin>>number;

        if( number %2 == 0){

            cout<<number<<" é par "<<endl;
        }else {
            cout<<number<<" é impar "<<endl;

        }


    return 0;
}
