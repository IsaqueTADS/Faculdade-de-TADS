#include<iostream>

bool verificador (int number, int divisor);

using namespace std;

int main (){

    int number = 1000000;

    bool resultado = verificador(number, 2);

    cout<<resultado<<endl;

    if(resultado == true){
        cout<<number<<" e um numero primo"<<endl;
    }else {
        cout<<number<<" nao e primo"<<endl;
    }

    return 0;
}

bool verificador (int number, int divisor){

    if (number <= 1 ){
        return false;
    }

    if ( divisor == number){
        return true;
    }

    if( number % divisor == 0){
        return false;
    }
    return verificador(number, divisor + 1);
}
