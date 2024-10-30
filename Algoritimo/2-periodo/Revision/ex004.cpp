#include<iostream>
#include<math.h>

using namespace std;

float distanciaPontos (float x1, float x2, float y1, float y2);

int main (){

    float x1,x2,y1,y2;

    cin>>x1;
    cin>>x2;
    cin>>y1;
    cin>>y2;

    float resultado = distanciaPontos(x1,x1,y1,y2);

    cout<<"Distancia: "<<resultado<<endl;

    return 0;
}

float distanciaPontos (float x1, float x2, float y1, float y2){

    float conta;
    conta = sqrt(pow(x2 - x1,2) + pow(y2 -y1,2));

    return conta;
}