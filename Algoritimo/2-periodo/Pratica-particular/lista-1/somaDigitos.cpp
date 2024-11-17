#include<iostream>


using namespace std;

int somaDigitos (int number);

int main (){

    int number = 8345;

    int resultado = somaDigitos(number);

    cout<<resultado<<endl;


    return 0;
}

int somaDigitos (int number){

    if ( number < 10 ){
        return number;
    }

    return number % 10 + somaDigitos(number / 10);



}