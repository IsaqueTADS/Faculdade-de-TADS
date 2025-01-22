#include<iostream>

using namespace std;


struct No
{
    int valor;
    No* proximo;
};

struct Lista
{
    No* primeiroNo;
    void criar();
    void inserir (int value);
    
};


int main (){




    return 0;
}

void Lista::criar(){
    primeiroNo=NULL;
    
}

void Lista::inserir( int value){
    No* novoNo = new No;
    novoNo -> proximo = NULL;
    novoNo -> valor = value;

    if (primeiroNo == NULL) primeiroNo = novoNo;
    else {
        No* aux = primeiroNo;
        while(aux ->  proximo != NULL){
            aux = aux -> proximo;
        }
        aux -> proximo = novoNo;
    }

}

