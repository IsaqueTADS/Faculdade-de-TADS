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
    void verificaInserir(int valor);
    void exibirFolha(No *percorre);
    void exibirFolhaOn();
    void contarFilhoNo(No *pecorre);
    void contarFilhoNoOn();
    void buscarValor(No *pecorre, int valor);
    void buscaValorOn(int valor);
};

int main()
{

    arvoreBinaria arvoreBin;

    arvoreBin.criar();
    arvoreBin.verificaInserir(50);
    arvoreBin.verificaInserir(30);
    arvoreBin.verificaInserir(70);
    arvoreBin.verificaInserir(20);
    arvoreBin.verificaInserir(40);
    arvoreBin.verificaInserir(60);
    arvoreBin.verificaInserir(80);
    arvoreBin.verificaInserir(15);
    arvoreBin.verificaInserir(25);
    arvoreBin.verificaInserir(35);
    arvoreBin.verificaInserir(45);
    arvoreBin.verificaInserir(36);
    arvoreBin.exibirFolhaOn();
    cout << endl;
    arvoreBin.contarFilhoNoOn();
    cout << endl;
    arvoreBin.buscaValorOn(500);

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

void arvoreBinaria::verificaInserir(int valor)
{
    inserir(raiz, valor);
}

void arvoreBinaria::exibirFolhaOn()
{
    exibirFolha(raiz);
}

void arvoreBinaria::exibirFolha(No *percorre)
{

    if (percorre == NULL)
    {
        return;
    }
    // percorre = raiz;

    if (percorre->direita == NULL && percorre->esquerda == NULL)
    {
        cout << "No folha: " << percorre->valor << endl;
    }

    exibirFolha(percorre->esquerda);
    exibirFolha(percorre->direita);
}

void arvoreBinaria::contarFilhoNoOn()
{
    contarFilhoNo(raiz);
}

void arvoreBinaria::contarFilhoNo(No *percorre)
{
    if (percorre == NULL)
    {
        return;
    }

    if (percorre != NULL)
    {

        int contador = 0;

        if (percorre->direita != NULL)
        {
            cout << "Filho da direita: " << percorre->direita->valor << "\t";
            contador++;
        }
        else
        {
        }

        cout << "Pai: " << percorre->valor << "\t";

        if (percorre->esquerda != NULL)
        {
            cout << "Filho da esquerda: " << percorre->esquerda->valor << "\t";
            contador++;
        }

        cout << "Total de filhos do pai: " << percorre->valor << " :: " << contador << "\t";
        cout << endl;
    }

    contarFilhoNo(percorre->esquerda);
    contarFilhoNo(percorre->direita);
}

void arvoreBinaria::buscaValorOn(int valor)
{
    buscarValor(raiz, valor);
}

void arvoreBinaria::buscarValor(No *pecorre, int valor)
{
    bool econtrado = false;
    if (pecorre == NULL)
    {
        return;
    }

    if (pecorre->valor == valor)
    {
        cout << "Valor Econtrado: " << pecorre->valor << endl;
        return;
    }

    if (valor > pecorre->valor)
    {
        buscarValor(pecorre->direita, valor);
    }

    if (valor < pecorre->valor)
    {
        buscarValor(pecorre->esquerda, valor);
    }

    if (!econtrado)
    {
        cout << "valor nao econtrado " << endl;
    }
}