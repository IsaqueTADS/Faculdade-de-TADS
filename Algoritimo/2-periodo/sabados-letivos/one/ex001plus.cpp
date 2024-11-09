#include<iostream>
#include<cmath>

bool verificador (int number, int divisor, int cont);

using namespace std;

int main (){

    int cont = 0;

    int number = 3000011;

    bool resultado = verificador(number, 2, 0);

    cout<<resultado<<endl;

    if(resultado == true){
        cout<<number<<" e um numero primo"<<endl;
    }else {
        cout<<number<<" nao e primo"<<endl;
    }

    return 0;
}

bool verificador (int number, int divisor, int cont){

   

    if (number <= 1 ){
        cout<<cont<<endl;
        return false;
    }

    if ( divisor > sqrt(number)){
        cout<<cont<<endl;
        return true;

    }

    if( number % divisor == 0){
        cout<<cont<<endl;
        return false;

    }
    return verificador(number, divisor + 1, cont ++);
}
