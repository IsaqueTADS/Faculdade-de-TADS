#include <iostream>

using namespace std;

struct No
{
    int valor;
    No *proximo;
};

struct Fila
{
    No *primeiroNo;
    No *ultimoNo;
    void criar();
    void enfileirar(int valor);
    void desenfileirar();
    void exibir();
    void contar();
    void exibirPrimeiroEllemento();
};

int main()
{

    Fila fila1;
    fila1.criar();
    fila1.enfileirar(1);
    fila1.enfileirar(1233);
    fila1.enfileirar(13);
    fila1.enfileirar(14);
    fila1.enfileirar(155);
    fila1.enfileirar(1267);
    fila1.enfileirar(12);
    fila1.enfileirar(341);
    fila1.desenfileirar();
    fila1.exibir();
    fila1.contar();
    fila1.exibirPrimeiroEllemento();

    return 0;
}
void Fila::criar()
{
    primeiroNo = NULL;
    ultimoNo = NULL;
}

void Fila::enfileirar(int valor)
{
    No *novoNo = new No;
    novoNo->valor = valor;
    novoNo->proximo = NULL;

    if (primeiroNo == NULL)
    {
        primeiroNo = novoNo;
        ultimoNo = novoNo;
        return;
    }
    else
    {
        ultimoNo->proximo = novoNo;
        ultimoNo = novoNo;
    }
}

void Fila::desenfileirar()
{
    if (primeiroNo == NULL)
    {
        cout << "FIla vazia " << endl;
        return;
    }
    else if (primeiroNo == ultimoNo)
    {
        delete primeiroNo;
        primeiroNo = NULL;
        ultimoNo = NULL;
        return;
    }
    else
    {
        No *aux = primeiroNo;
        primeiroNo = primeiroNo->proximo;
        delete aux;
    }
}

void Fila::exibir()
{
    if (primeiroNo == NULL)
    {
        cout << "Fila vazia " << endl;
        return;
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

void Fila::contar()
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

        cout << "A fila tem : " << contador << " Items " << endl;
    }
}

void Fila::exibirPrimeiroEllemento()
{
    if (primeiroNo == NULL)
    {
        cout << "Fila vazia " << endl;
    }
    else
    {
        cout << "Primeiro elemento: " << primeiroNo->valor << endl;
    }
}