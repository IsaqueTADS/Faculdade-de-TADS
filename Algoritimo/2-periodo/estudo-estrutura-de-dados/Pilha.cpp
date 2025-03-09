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
    void desempilhar();
    void exibir();
    void exibirTopo();
    void contar();
    void buscarValor(int valor);
};

int main()
{

    Pilha pilha1;
    pilha1.criar();
    pilha1.empilhar(1);
    pilha1.empilhar(12);
    pilha1.empilhar(3);
    pilha1.empilhar(44);
    pilha1.empilhar(5);
    pilha1.empilhar(220);
    pilha1.desempilhar();
    pilha1.exibir();
    pilha1.exibirTopo();
    pilha1.contar();
    pilha1.buscarValor(5);
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

    if (topo == NULL)
    {
        topo = novoNo;
        return;
    }
    else
    {
        novoNo->proximo = topo;
        topo = novoNo;
    }
}

void Pilha::desempilhar()
{
    if (topo == NULL)
    {
        cout << "Pilha Vazia" << endl;
        return;
    }
    else
    {
        No *aux = topo;
        topo = topo->proximo;
        cout << "No deletado: " << aux->valor << endl;
        delete aux;
    }
}

void Pilha::exibir()
{
    if (topo == NULL)
    {
        cout << "Pilha vazia" << endl;
        return;
    }
    else
    {
        No *aux = topo;

        while (aux)
        {
            cout << aux->valor << " ";
            aux = aux->proximo;
        }
        cout << endl;
    }
}

void Pilha::exibirTopo()
{
    if (topo == NULL)
    {
        cout << "Pilha vazia " << endl;
        return;
    }
    else
    {
        cout << "Topo: " << topo->valor << endl;
    }
}

void Pilha::contar()
{
    if (topo == NULL)
    {
        cout << "Pilha vazia" << endl;
        return;
    }
    else
    {
        int contador = 0;
        No *aux = topo;
        while (aux)
        {
            contador++;
            aux = aux->proximo;
        }
        cout << "Quantidade de items da pilha: " << contador << endl;
    }
}

void Pilha::buscarValor(int valor)
{
    if (topo == NULL)
    {
        cout << "Pilha vazia " << endl;
    }
    else
    {
        int indice = 0;
        No *aux = topo;
        while (aux)
        {

            if (aux->valor == valor)
            {

                cout << "Encontrado: indice " << indice << " : " << aux->valor << endl;
                return;
            }

            aux = aux->proximo;
            indice++;
        }

        cout << "Valor não econtrado " << endl;
    }
}