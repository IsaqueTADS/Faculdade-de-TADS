#include <iostream>

using namespace std;


int main (){

    int vetor[8]= {4,8,15,22,55,66,100,888};
    int tamanho = 8, inicio = 0, fim = tamanho -1, alvo = -888;
    bool achou = false;

    while(inicio <= fim){
        int meio = (inicio + fim)/2;

        if(vetor[meio] == alvo){
            cout<<"achou"<<endl;
            achou = true;
            break;
        }
        else if ( alvo > vetor[meio]){
            inicio = meio + 1;
        }
        else{
            fim = meio -1;
        }
    }

    if(!achou) cout<<"valor nao encontrado"<<endl;

    return 0;
}