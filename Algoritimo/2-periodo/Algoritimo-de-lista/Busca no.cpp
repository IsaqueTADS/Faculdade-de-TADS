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
    void excluirDoMeio(No *valor);
    No *PesquisarNo(int valor);
    void exluirNoPesquisado(int valor);
};

int main()
{
    ListaDupla oi;

    oi.criar();
    oi.inserir(12);
    oi.inserir(133);
    oi.inserir(125);
    oi.inserir(1);
    oi.inserir(1200);
    oi.inserir(1260);
    oi.inserir(3);

    oi.exluirNoPesquisado(120);
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
        aux2->proximo = NULL;
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

    No *aux = valor;
    No *aux2 = aux->anterior;
    No *aux3 = aux->proximo;

    aux2->proximo = aux3;
    aux3->anterior = aux2;

    delete aux;
}

No *ListaDupla::PesquisarNo(int valor)
{

    No *aux = primeiroNo;
    while (aux)
    {
        if (aux->valor == valor)
            return aux;
        aux = aux->proximo;
    }

    // return 0;
    // return NULL;
    return nullptr;
}

void ListaDupla::exluirNoPesquisado(int valor)
{

    if (primeiroNo == NULL) cout << "Lista vazia";
    else
    {
        No *criminoso = PesquisarNo(valor);

        if (!criminoso)
            cout << "valor: " << valor << " nao econtrado na lista " << endl;
        else if (criminoso == primeiroNo)
            excluirInicio();
        else if (criminoso->anterior != NULL && criminoso->proximo == NULL)
            excluirFinal();
        else
        {
            excluirDoMeio(criminoso);
        }
    }
}