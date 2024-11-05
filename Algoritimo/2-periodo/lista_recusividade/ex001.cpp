#include<iostream>

using namespace std;

int potencia (int base, int expoente);

int main (){
    int base = 5,expoente = 5;

    int resultado = potencia(base,expoente);
    cout<<resultado<<endl;


    return 0;
}

int potencia (int base, int expoente){
    if (expoente == 1){
        return base;
    }else if (expoente == 0){
        return 0;
    }
    else {
        return base * potencia (base,expoente -1);
    }
}