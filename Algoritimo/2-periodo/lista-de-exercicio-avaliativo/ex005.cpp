#include<iostream>

using namespace std;

float PA (float a1,float n, float r);

int main (){

    float a1 = 4,n = 8,r = 2;

    float resultado = PA(a1,n,r);
    cout<<resultado;
    return 0;
}


float PA (float a1,float n, float r){
    if( n == 1){
        return a1;
    }else{
        return PA(a1, n - 1, r) + r;
    }
}