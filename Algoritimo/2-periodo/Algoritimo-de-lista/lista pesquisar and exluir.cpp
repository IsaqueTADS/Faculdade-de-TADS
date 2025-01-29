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
    void contador();
    void excluir();
    void procurar( int procurado);
    
};


int main (){

    Lista nova;
    nova.criar();
    nova.inserir(10);
    nova.inserir(15);
    nova.inserir(170);
    nova.inserir(12);
    nova.imprimir();
    nova.contador();
    nova.procurar(170);
    nova.excluir();
    nova.imprimir();
    nova.procurar(170);

    



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

void Lista::contador(){
    int cont = 0;
    No* aux = primeiroNo;
    if (primeiroNo == NULL) cout<<"vazia";
    else {
    while(aux  != NULL){
        cont ++;
        aux = aux -> proximo;
    }
       cout<<"quantidade: "<<cont<<endl;
    }
}


void Lista::excluir(){
    if (primeiroNo == NULL) cout<<"vazia";
    else {
        No* aux = primeiroNo;
        primeiroNo = primeiroNo -> proximo;
        delete aux;

    }
}

void Lista::procurar( int procurado){
    if (primeiroNo == NULL) cout<<"vazia";
    else {
        bool achou = false;
        No* aux = primeiroNo;
        while( aux != NULL){
            if (procurado == aux -> valor){
                achou = true;
                cout<<"valor econtrado: "<< aux -> valor<<endl;
            }
            aux = aux -> proximo;
        }

        if(achou == false) cout<<"valor: "<<procurado<<" Nao econtrado "<<endl;
    }
}

