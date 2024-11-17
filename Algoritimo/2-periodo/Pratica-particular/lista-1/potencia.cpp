#include<iostream>

using namespace std;

float potencia ( float base, float expoente );

int main (){

    float base = 5, expoente = 5;
    
    float resultado = potencia (base,expoente);

    cout<<resultado<<endl;


    return 0;
}

float potencia ( float base, float expoente ){

    if ( expoente == 1 ){
        return base;
    }

    return base * potencia(base, expoente - 1);


}