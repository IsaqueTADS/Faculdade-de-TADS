#include<iostream>


using namespace std;

int main (){

    int vet [5] = {1,3,5,7,9};
    int tamanho = 5;
    int inicio = 0, fim = 5;
    int alvo = 7;

    while(inicio <= fim ){
        int meio = (inicio + fim) / 2;

        if(alvo == vet[meio]){
            cout<<"achou";
            break;
        }

        if (alvo > vet[meio]){
            inicio = meio +1;
        }
    }


    return 0;
}