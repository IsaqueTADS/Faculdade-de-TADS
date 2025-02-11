#include <iostream>
using namespace std;
struct No
{
    int valor;
    No *anterior;
    No *proximo;
};
struct Dupla
{
    No *primeiroNo;
    void Criar();
    void Inserir(int valor);
    void Imprime();
    void ExcluirInicio();
    void ExcluirNoFim();
    void ExcluirMeio(No *valorNo);
    No *PesquisaNo(int valorNo);
    void excluirPesquisa(int valor);
};

int main()
{
    Dupla lista;
    lista.Criar();
    lista.Inserir(17);
    lista.Inserir(48);
    lista.Inserir(23);
    lista.Inserir(2);
    lista.Imprime();

    lista.excluirPesquisa(48);

    cout << endl;

    lista.Imprime();

    cout << endl;

    lista.excluirPesquisa(23);

    lista.Imprime();

    
    cout << endl;

    lista.excluirPesquisa(17);

    lista.Imprime();

    cout << endl;

    lista.excluirPesquisa(2);

    lista.Imprime();


    return 0;
}

void Dupla::Criar()
{
    primeiroNo = NULL;
}
void Dupla::Inserir(int valor)
{
    No *novoNo = new No;
    novoNo->anterior = NULL;
    novoNo->proximo = NULL;
    novoNo->valor = valor;
    if (primeiroNo == NULL)
    {
        primeiroNo = novoNo;
    }
    else
    {
        No *aux = primeiroNo;
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        aux->proximo = novoNo;
        novoNo->anterior = aux;
    }
}
void Dupla::Imprime()
{
    if (primeiroNo == NULL)
    {
        cout << "Lista Vazia" << endl;
        return;
    }
    else
    {
        No *aux = primeiroNo;
        while (aux != NULL)
        {
            cout << aux->valor << " ";
            aux = aux->proximo;
        }
    }
}

void Dupla::ExcluirInicio()
{
    if (primeiroNo == NULL)
        cout << "Lista Vazia " << endl;
    else if (primeiroNo->proximo == NULL)
    {
        delete primeiroNo;
        primeiroNo = NULL;
        return;
    }
    else
    {
        No *aux = primeiroNo;
        primeiroNo = primeiroNo->proximo;
        primeiroNo->anterior = NULL;
        delete aux;
        return;
    }
}

void Dupla::ExcluirNoFim()
{
    if (primeiroNo == NULL)
        cout << "Lista Vazia " << endl;
    else if (primeiroNo->proximo == NULL)
        ExcluirInicio();
    else
    {
        No *aux = primeiroNo;

        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        No *aux2 = aux->anterior;

        aux2->proximo = NULL;

        delete aux;
    }
}

void Dupla::ExcluirMeio(No *ValorNo)
{
    No *aux2 = ValorNo->anterior;
    No *aux3 = ValorNo->proximo;

    aux2->proximo = aux3;
    aux3->anterior = aux2;

    delete ValorNo;
}

No *Dupla::PesquisaNo(int valorNo)
{
    No *aux = primeiroNo;
    while (aux)
    {
        if (aux->valor == valorNo)
            return aux;
        aux = aux->proximo;
    }
    // return 0;
    // return NULL;
    return nullptr;
}

void Dupla::excluirPesquisa(int valor)
{
    if (primeiroNo == NULL)
        cout << "Lista Vazia ";
    else
    {
        No *procurado = PesquisaNo(valor);
        if (procurado == NULL)
        {
            cout << "Nó não existe na lista " << endl;
            return;
        }
        else if (procurado == primeiroNo)
            ExcluirInicio();
        else if (procurado->anterior != NULL && procurado->proximo == NULL)
            ExcluirNoFim();
        else
            ExcluirMeio(procurado);
    }
}