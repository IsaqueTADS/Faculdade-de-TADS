#include<iostream>

using namespace std;

int main (){
    int vetor[8] = {10,15,33,40,55,80,90,155};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int inicio = 0, fim = tamanho -1, alvo = 33;
    bool achou = false;

    while( inicio <= fim){
       int meio = (inicio + fim) /2;

       if ( vetor[meio] == alvo){
        achou = true;
        break;
       }

       if(alvo > vetor[meio]){
        inicio = meio + 1;
       }

       if (alvo < vetor[meio]){
        fim = meio -1;
       }

    }

    cout<<achou<<endl;

    if(achou){
        cout<<"numero econtrado"<<endl;
    }else{
        cout<<"numero nao encontrado"<<endl;
    }



    return 0;
}