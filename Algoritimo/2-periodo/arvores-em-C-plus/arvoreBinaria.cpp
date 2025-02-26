#include <iostream>
using namespace std;

struct No
{
    int valor;
    No *esquerda;
    No *direita;
};

struct arvoreBinaria
{
    No *raiz;
    void criar();
    void inserir(No *&percorre, int valor);
    void verificaInseir(int valor);
};

int main()
{

    return 0;
}

void arvoreBinaria::criar()
{
    raiz = NULL;
}

void arvoreBinaria::inserir(No *&percorre, int valor)

{

    if (percorre == NULL)
    {
        percorre = new No;
        percorre->direita = NULL;
        percorre->esquerda = NULL;
        percorre->valor = valor;
    }
    else
    {
        if (valor < percorre->valor)
        {
            inserir(percorre->esquerda, valor);
        }
        else
        {
            inserir(percorre->direita, valor);
        }
    }
}

void arvoreBinaria::verificaInseir(int valor)
{
    inserir(raiz, valor);
}