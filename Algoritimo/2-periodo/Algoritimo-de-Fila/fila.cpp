#include <iostream>
#include <stdbool.h>

using namespace std;

struct No
{
    int senha;
    No *proximo;
};

struct Fila
{
    No *primeiroNo;
    No *ultimoNo;
    void Criar();
    void Enfileirar();
    void Imprime();
    void Desenfileirar();
    void Menu();
};

int main()
{
    Fila oi;

    oi.Criar();
    // oi.Enfileirar();
    // oi.Enfileirar();
    // oi.Enfileirar();
    // oi.Enfileirar();
    // oi.Enfileirar();
    // oi.Imprime();
    // oi.Desenfileirar();
    // oi.Imprime();
    // oi.Desenfileirar();
    // oi.Imprime();

    oi.Menu();

    return 0;
}

void Fila::Criar()
{
    primeiroNo = NULL;
    ultimoNo = NULL;
}

void Fila::Enfileirar()
{
    static int cont = 1;
    No *novoNo = new No;
    novoNo->proximo = NULL;
    novoNo->senha = cont++;

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
        return;
    }
}

void Fila::Imprime()
{
    if (primeiroNo == NULL)
        cout << "Fila Vazia " << endl;
    else
    {
        No *aux = primeiroNo;
        while (aux)
        {
            cout << aux->senha << " ";
            aux = aux->proximo;
        }
        cout << endl;
    }
}

void Fila::Desenfileirar()
{
    if (primeiroNo == NULL)
    {
        cout << "Fila Vazia " << endl;
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

void Fila::Menu()
{
    while (true)
    {
        int digito;
        cout << "Digite a opcao" << endl;
        cout << " 1 - Criar Senha " << endl;
        cout << " 2 - Finalizar/Exibir " << endl;
        cout << " 3 - Deletetando " << endl;
        cout << " 4 - Sair " << endl;
        cin >> digito;
        system("cls");

        while (digito < 1 || digito > 4)
        {
            system("cls");
            cout << "Digite um valor valido " << endl;
            cout << " 1 - Criar Senha " << endl;
            cout << " 2 - Finalizar/Exibir " << endl;
            cout << " 3 - Deletetando " << endl;
            cout << " 4 - Sair " << endl;
            cin >> digito;
            /* code */
        }

        switch (digito)
        {
        case 1:
            cout << "Criando noca senha " << endl;
            Enfileirar();
            break;
        case 2:
            cout << "Atendimento Finalizado " << endl;
            Imprime();
            break;
        case 3:
            cout << "Deletando " << endl;
            Desenfileirar();
            break;
        case 4:
            cout << "Saindo " << endl;
            return;
        }
    }
}