#include <iostream>

using namespace std;

struct No {
    int valor;
    No* anterior;
    No* proximo;
};

struct ListaDupla
{
    No* primeiroNo;
    void criar();
    void inserir(int valor);
};


int main (){



 return 0;
}

void ListaDupla::criar(){
    primeiroNo = NULL;
}

void ListaDupla::inserir(int valor){
    No* novoNo = new No;
    novoNo -> proximo = NULL; 
    novoNo -> anterior = NULL; 
    novoNo -> valor = valor;

    if (primeiroNo == NULL){
        primeiroNo = novoNo;
    }
    else {
        No* aux = primeiroNo;
        while (aux -> proximo != NULL){
            aux = aux -> proximo;
        }
        novoNo -> anterior = aux;
        aux -> proximo = novoNo;
    }
}