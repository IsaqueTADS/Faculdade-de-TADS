#include <iostream>
#include <stdbool.h>

using namespace std;

struct Vizinho
{
    int numeroCasa;
    Vizinho *direita;
    Vizinho *esquerda;
};

struct RedeVizinhos
{
    Vizinho *primeiroVizinho;
    void criar();
    void novoVizinho(int numero);
    void imprimir();
    void verificarUltimo();

    void menu();
};

int main()
{

    RedeVizinhos rua_1;
    rua_1.criar();
    rua_1.menu();

    return 0;
}

void RedeVizinhos::criar()
{
    primeiroVizinho = NULL;
}

void RedeVizinhos::novoVizinho(int numero)
{
    Vizinho *novoVizinho = new Vizinho;
    novoVizinho->esquerda = NULL;
    novoVizinho->direita = NULL;
    novoVizinho->numeroCasa = numero;

    if (primeiroVizinho == NULL)
    {
        primeiroVizinho = novoVizinho;
    }
    else
    {
        Vizinho *aux = primeiroVizinho;

        while (aux->direita)
        {
            aux = aux->direita;
        }

        aux->direita = novoVizinho;
        novoVizinho->esquerda = aux;
    }
}

void RedeVizinhos::imprimir()
{
    if (primeiroVizinho == NULL)
        cout << "Lista vazia" << endl;
    else
    {
        Vizinho *aux = primeiroVizinho;
        while (aux)
        {

            if (aux->esquerda)
            {
                cout << "Vizinho da esquerda: " << aux->esquerda->numeroCasa << "\t\t\t";
            }
            else
            {
                cout << "Nao tem vizinho na esquerda " << "\t\t";
            }

            cout << "Numero da casa vizinho:: " << aux->numeroCasa << "\t\t\t";

            if (aux->direita)
            {
                cout << "Vizinho da direita: " << aux->direita->numeroCasa << "\t\t\t";
            }
            else
            {
                cout << "Nao tem vizinho na direita " << "\t\t\t";
            }

            cout << endl;
            aux = aux->direita;
        }
    }
}

void RedeVizinhos::menu()
{
    while (true)
    {
        int digito;
        cout << "Digite a opcao" << endl;
        cout << " 1 - Criar novo vizinho" << endl;
        cout << " 2 - Imprimir vizinhos " << endl;
        cout << " 3 -  " << endl;
        cout << " 4 -  Verifique ultimo vizinho " << endl;
        cout << " 5 - Sair " << endl;
        cin >> digito;
        system("cls");

        while (digito < 1 || digito > 5)
        {
            cout << "ERRO " << endl;
            cout << "Digite novamente" << endl;
            cout << " 1 - Criar novo vizinho" << endl;
            cout << " 2 - Imprimir vizinhos " << endl;
            cout << " 3 -  " << endl;
            cout << " 4 -  Verifique ultimo vizinho " << endl;
            cout << " 5 - Sair " << endl;
            cin >> digito;
            system("cls");
        }

        switch (digito)
        {
        case 1:

            cout << "Digite numero da casa  para o novo vizinho " << endl;
            cin >> digito;
            novoVizinho(digito);
            system("cls");
            break;

        case 2:

            imprimir();

            break;

        case 4:

            verificarUltimo();

            break;
        case 5:
            cout << "Saindo..." << endl;
            return;
            break;
        default:
            break;
        }
    }
}

void RedeVizinhos::verificarUltimo()
{
    if (primeiroVizinho == NULL)
    { 
        cout << "lista vazia "<<endl;
    }
    else if (primeiroVizinho->direita == NULL)
    {
        cout << "Ultimo vizinho " << primeiroVizinho->numeroCasa << endl;
    }
    else
    {
        Vizinho *aux = primeiroVizinho;
        while (aux->direita)
        {
            aux = aux->direita;
        }
        cout << "Ultimo vizinho " << aux->numeroCasa << endl;
    }
}