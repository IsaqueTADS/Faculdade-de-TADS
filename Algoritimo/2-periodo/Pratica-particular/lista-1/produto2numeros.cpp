#include<iostream>

using namespace std;

int produto2Numeros(int a, int b);

int main (){

    int a = 100, b = 5;

    int resultado = produto2Numeros(a,b);
    cout<<resultado<<endl;


    return 0;
}

int produto2Numeros(int a, int b){

    if ( b == 1){
        return a;
    }else {
        return a + produto2Numeros(a,b -1);
    }

}