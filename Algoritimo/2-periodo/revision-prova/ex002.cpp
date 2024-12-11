#include<iostream>

using namespace std;

int sequencial(int vet[],int tamanho, int alvo);

int main (){

    int vet [5] = {10,5,8,12,3};
    int tamanho = 5;
    int alvo = 8;

    int res = sequencial(vet,tamanho, alvo);

    if(res == 1) cout<<"achou"<<endl;else cout<<"nao achou";


    return 0;
}

int sequencial(int vet[], int tamanho, int alvo){

    for(int i = 0; i < tamanho; i ++){
        if(alvo == vet[i]){
            return 1;
        }
    }

    return 0;

}