#include <iostream>

using namespace std;

struct No
{
    int valor;
    No *proximo;
};

struct ListaSimples
{
    No *primeiroNo;
    void criar();
    void inserir(int valor);
    void remover();
    void exibir();
    void contar();
    void buscar(int valor);
};

int main()
{
    ListaSimples lista;
    lista.criar();
    lista.inserir(867);
    lista.inserir(12);
    lista.inserir(7);
    lista.inserir(23);
    lista.inserir(9);
    lista.inserir(42);
    lista.inserir(3);
    lista.inserir(17);
    lista.inserir(8);
    lista.inserir(31);
    lista.remover();
    lista.exibir();
    lista.contar();
    lista.buscar(42);

    return 0;
}

void ListaSimples::criar()
{
    primeiroNo = NULL;
}

void ListaSimples::inserir(int valor)
{
    No *novoNo = new No;
    novoNo->proximo = NULL;
    novoNo->valor = valor;

    if (primeiroNo == NULL)
    {
        primeiroNo = novoNo;
    }
    else
    {
        No *aux = primeiroNo;

        while (aux->proximo)
        {
            aux = aux->proximo;
        }

        aux->proximo = novoNo;
    }
}

void ListaSimples::remover()
{
    if (primeiroNo == NULL)
    {
        cout << "Lista vazia " << endl;
    }
    else
    {
        No *aux = primeiroNo;
        primeiroNo = primeiroNo->proximo;
        delete aux;
    }
}

void ListaSimples::exibir()
{
    if (primeiroNo == NULL)
    {
        cout << "Lista vazia " << endl;
    }
    else
    {
        No *aux = primeiroNo;

        while (aux)
        {
            cout << aux->valor << " ";
            aux = aux->proximo;
        }
        cout << endl;
    }
}

void ListaSimples::buscar(int valor)
{

    if (primeiroNo == NULL)
    {
        cout << "Lista vazia " << endl;
    }
    else

    {
        No *aux = primeiroNo;

        while (aux)
        {

            if (aux->valor == valor)
            {
                cout << "Valor: " << valor << " encontrado com sucesso " << endl;
                return;
            }
            aux = aux->proximo;
        }

        cout << "Valor " << valor << " nao econtrado " << endl;
    }
}

void ListaSimples::contar()
{
    if (primeiroNo == NULL)
    {
        cout << "Lista vazia " << endl;
        return;
    }
    else
    {
        int contador = 0;
        No *aux = primeiroNo;

        while (aux)
        {
            contador++;
            aux = aux->proximo;
        }

        cout << "Quantidade de elementos na lista: " << contador << endl;
    }
}