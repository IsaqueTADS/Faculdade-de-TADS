#include<iostream>

using namespace std;

int main (){

    int tamanho = 5;
    float thaisKarlo [tamanho] = {60.5,50.6,80.6,100.200,400.256}, soma = 0.0;
    float* peso = thaisKarlo;

    for (int i = 0; i < tamanho; i++) soma += peso[i];

    cout<<soma<<endl;
    cout<<"media: "<<soma/tamanho<<endl;

    return 0;
}