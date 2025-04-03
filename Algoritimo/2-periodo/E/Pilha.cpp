#include <iostream>

using namespace std;

struct No
{
    int valor;
    No *proximo;
};

struct Pilha
{
    No *topo;
    void criar();
    void empilhar(int valor);
};

int main()
{

    Pilha pilha1;
    pilha1.criar();
}

void Pilha::criar()
{
    topo = NULL;
}

void Pilha::empilhar(int valor)
{

    No *novoNo = new No;
    novoNo->valor = valor;
    novoNo->proximo = NULL;
}