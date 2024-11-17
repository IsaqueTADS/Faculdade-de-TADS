#include <iostream>

using namespace std;

int somaNumeros(int number);

int main (){

    int n = 10;

    int resultado = somaNumeros(n);

    cout<<resultado<<endl;

    return 0;
}

int somaNumeros(int number){

    if ( number == 1 ){
        return 1;
    }

    return number + somaNumeros(number -1);
}