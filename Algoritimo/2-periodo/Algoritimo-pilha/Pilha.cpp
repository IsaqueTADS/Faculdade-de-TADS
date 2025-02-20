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
    void Empilhar(int valor);
    void Imprimir();
    void Desemplihar();
};

int main()
{

    Pilha pilha1;
    pilha1.criar();
    pilha1.Empilhar(1);
    pilha1.Empilhar(12);
    pilha1.Empilhar(134);
    pilha1.Empilhar(144);
    pilha1.Empilhar(153);
    pilha1.Empilhar(123);
    pilha1.Imprimir();
    cout << endl;
    pilha1.Desemplihar();
    pilha1.Imprimir();

    return 0;
}

void Pilha::criar()
{
    topo = NULL;
}

void Pilha::Empilhar(int valor)
{

    No *novoNo = new No;
    novoNo->proximo = NULL;
    novoNo->valor = valor;

    if (topo == NULL)
        topo = novoNo;
    else
    {

        novoNo->proximo = topo;
        topo = novoNo;
    }
}

void Pilha::Imprimir()
{
    if (topo == NULL)
        cout << "Pilha vazia " << endl;
    else
    {
        No *aux = topo;
        while (aux)
        {
            cout << aux->valor << endl;
            aux = aux->proximo;
        }
    }
}

void Pilha::Desemplihar()
{
    if (topo == NULL)
        cout << "Pilha Vazia " << endl;
    else if (topo->proximo == NULL)
    {
        delete topo;
        topo = NULL;
    }
    else
    {
        No *aux = topo;
        topo = topo->proximo;
        delete aux;
    }
}