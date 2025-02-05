#include <iostream>

using namespace std;

struct No
{
    int valor;
    No *anterior;
    No *proximo;
};

struct ListaDupla
{
    No *primeiroNo;
    void criar();
    void inserir(int valor);
    void excluirFinal();
    void excluirInicio();
    void pesquisar(int procurado);
    void exibir();
    void excluirDoMeioPP();
    void excluirDoMeio(No *NOvalor);
    No *PesquisarNo(int valor);
    void exluirNoPesquisado(int valor);
};

int main()
{
    ListaDupla oi;

    oi.criar();
    oi.inserir(12);
    oi.inserir(133);

    oi.excluirFinal();

    // oi.exluirNoPesquisado(133);
    cout << endl;
    oi.exibir();

    return 0;
}

void ListaDupla::criar()
{
    primeiroNo = NULL;
}

void ListaDupla::inserir(int valor)
{
    No *novoNo = new No;
    novoNo->proximo = NULL;
    novoNo->anterior = NULL;
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
        novoNo->anterior = aux;
        aux->proximo = novoNo;
    }
}

void ListaDupla::excluirFinal()
{
    No *aux = primeiroNo;

    if (primeiroNo == NULL)
        cout << "Lista vazia";
    else
    {
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        No *aux2 = aux->anterior;

        if (aux2 != NULL)
            aux2->proximo = NULL;
        else
            primeiroNo = NULL;

        delete aux;
    }
}

void ListaDupla::pesquisar(int procurado)
{
    No *aux = primeiroNo;
    bool achou = false;

    if (primeiroNo == NULL)
        cout << "Lista vazia";
    else
    {
        while (aux)
        {
            if (procurado == aux->valor)
            {
                achou = true;
                cout << "item econtrado: " << aux->valor << endl;
                break;
            }
            aux = aux->proximo;
        }
        if (!achou)
            cout << "O item: " << procurado << " nao econtrado" << endl;
    }
}

void ListaDupla::exibir()
{
    No *aux = primeiroNo;

    while (aux)
    {
        cout << aux->valor << "\t";
        aux = aux->proximo;
    }
    cout << endl;
}

void ListaDupla::excluirDoMeioPP()
{
    No *cont = primeiroNo;
    if (primeiroNo == NULL)
        cout << "vazia";
    else
    {
        int contador = 0;

        while (cont)
        {
            cont = cont->proximo;
            contador++;
        }

        if (contador % 2 == 0)
        {
            contador = (contador / 2) + 1;
        }
        else
        {
            contador = (contador / 2) + 1;
        }

        No *aux = primeiroNo;
        for (int i = 1; i < contador; i++)
        {
            aux = aux->proximo;
        }

        No *aux2 = aux->anterior;
        No *aux3 = aux->proximo;

        aux2->proximo = aux3;
        aux3->anterior = aux2;

        delete aux;
    }
}

void ListaDupla::excluirInicio()
{
    if (primeiroNo == NULL)
        cout << "Lista vazia\n";
    else
    {

        No *aux = primeiroNo;
        primeiroNo = primeiroNo->proximo;
        primeiroNo->anterior = NULL;
        delete aux;
    }
}

void ListaDupla::excluirDoMeio(No *valor)
{
    No *aux2 = valor->anterior;
    No *aux3 = valor->proximo;

    aux2->proximo = aux3;
    aux3->anterior = aux2;

    delete valor;
}

No *ListaDupla::PesquisarNo(int NOvalor)
{

    No *aux = primeiroNo;
    while (aux)
    {
        if (aux->valor == NOvalor)
            return aux;
        aux = aux->proximo;
    }

    // return 0;
    // return NULL;
    return nullptr;
}

void ListaDupla::exluirNoPesquisado(int valor)
{

    if (primeiroNo == NULL)
        cout << "Lista vazia";
    else
    {
        No *aux = PesquisarNo(valor);

        if (!aux)
            cout << "valor: " << valor << " nao econtrado na lista " << endl;
        else if (aux == primeiroNo)
            excluirInicio();
        else if (aux->anterior != NULL && aux->proximo == NULL)
            excluirFinal();
        else
        {
            excluirDoMeio(aux);
        }
    }
}