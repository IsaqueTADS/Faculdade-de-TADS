#include <iostream>

using namespace std;

struct No
{

    int valor;
    No *proximo;
};

struct Lista
{

    No *primeiroNo;
    void criar();
};

int main()
{

    Lista lista1;
    lista1.criar();

    return 0;
}

void Lista::criar()
{
    primeiroNo = NULL;
}