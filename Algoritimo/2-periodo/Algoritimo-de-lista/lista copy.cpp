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
    void imprimir ();
    
};


int main (){

    Lista nova;

    nova.inserir(10);
    nova.inserir(15);
    nova.inserir(170);
    nova.inserir(12);
    nova.imprimir();



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

// void Lista::imprimir (){

//     No* aux2 = primeiroNo;
//     if (primeiroNo == NULL) cout<<"vazia";
//     else {
//     while(aux2 -> proximo != NULL){
//         cout<<aux2 -> valor<<endl;
//         aux2 = aux2 -> proximo;
//     }
//         cout<<aux2 -> valor<<endl;
//     }
// }

void Lista::imprimir (){

    No* aux = primeiroNo;
    if (primeiroNo == NULL) cout<<"vazia";
    else {
    while(aux  != NULL){
        cout<<aux -> valor<<endl;
        aux = aux -> proximo;
    }
       
    }
}

