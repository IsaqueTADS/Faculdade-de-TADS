#include<iostream>

using namespace std;

int main (){

    int tamanho = 3;
    float altura [tamanho];
    float* Paltu = altura;
    float menor = 400.0, maior = -1.0;

    for(int i = 0; i < tamanho; i++) cin>>*(Paltu+i);


    for(int i = 0; i < tamanho; i++){

        if (*(Paltu + i) > maior){
            maior = *(Paltu + i);
        }

        if (*(Paltu + i) < menor){
            menor = *(Paltu + i);
        }
        

    } 

    cout<<"maior: "<<maior<<endl;
    cout<<"menor: "<<menor<<endl;

    return 0;
}