#include <iostream>


using namespace std;


struct Pedido {

    int n;

    double valorPedido;

    Pedido *proximo;

};


struct Lista {

    Pedido* primeiroPedido;

    void Criar();

    void InserirPedido(double valor);

    void Imprimir();

    void ExcluirInicio();

    void Contador();

    void BuscarPedido(int numero);

    void ExtremidadesPreco();

    void Menu();

};


void Lista :: Criar() {

    primeiroPedido = NULL;

};


void Lista::InserirPedido(double valor) {

    static int cont = 1;

    Pedido* novoPedido = new Pedido;

    novoPedido->proximo = NULL;

    novoPedido -> n = cont++;

    novoPedido-> valorPedido = valor;


    if (primeiroPedido == NULL)

    {

        primeiroPedido = novoPedido;

    }

    else

    {

        Pedido *aux=primeiroPedido;

        while(aux->proximo!=NULL) {

            aux=aux->proximo;

        }

        aux->proximo=novoPedido;


    }


}


void Lista::Imprimir() {

    Pedido *cont = primeiroPedido;


    if (cont == NULL) {

        cout << "Lista vazia" << endl;

    } else {

        while (cont != NULL) {

            cout <<" R$" <<cont->valorPedido << ", Numero do pedido: "<<cont->n<<endl;

            cont = cont->proximo;

        }

    }

}



void Lista::ExcluirInicio() {

    if(primeiroPedido==NULL) {

        cout<<"Lista Vazia" << endl;

        return;

    }

    else if(primeiroPedido->proximo==NULL) {

        delete primeiroPedido;

        primeiroPedido=NULL;

        return;

    }

    else {

        Pedido* aux=primeiroPedido;

        primeiroPedido=primeiroPedido->proximo;

        delete aux;

    }

    cout<<"Pedido Concluido \n";

}



void Lista::Contador() {

    Pedido *aux = primeiroPedido;

    int cont = 0;

    if (aux == NULL) {

        cout<<"Lista vazia" << endl;

    } else {

        while (aux != NULL) {

            cont++;

            aux = aux->proximo;

        }

        cout<<"Pedidos em andamento: "<<cont<<endl;

    }

}



void Lista:: BuscarPedido(int numero) {


    if(primeiroPedido==NULL) {

        cout<<"Lista Vazia"<<endl;

        return;

    }

    else {

        Pedido* aux=primeiroPedido;


        while(aux != NULL) { // Correção: Iterar até aux ser NULL

            if(aux->n == numero) {

                cout <<"Valor: R$"<<aux->valorPedido << ", Numero do pedido: "<< aux->n<<endl;

                return;

            }

            aux = aux->proximo; // Mover para o próximo nó em todos os casos

        }

        cout<<"Nao tem nenhum pedido com esse numero.\n";

    }

}






void Lista::ExtremidadesPreco() {

    if (primeiroPedido == NULL) {

        cout << "Nenhum pedido na fila." << endl;

        return;

    }

    Pedido* aux = primeiroPedido;

    double maisCaro = aux->valorPedido;

    double maisBarato = aux->valorPedido;


    while (aux != NULL) {

        if (aux->valorPedido > maisCaro) {

            maisCaro = aux->valorPedido;

        }

        if (aux->valorPedido < maisBarato) {

            maisBarato = aux->valorPedido;

        }

        aux = aux->proximo;

    }


    cout << "Pedido mais caro: " << maisCaro << endl;

    cout << "Pedido mais barato: " << maisBarato << endl;

}


void Lista::Menu()

{

    int digito;

    double preco;

    int p;


    while (true)

    {


        cout << "\nDigite a opcao" << endl;

        cout << " 1 - Novo Pedido " << endl;

        cout << " 2 - Pedido Cocluido " << endl;

        cout << " 3 - Imprimir fila de pedidos " << endl;

        cout << " 4 - Conta a quantidade de pedidos em andamento " << endl;

        cout << " 5 - Busque um pedido pelo numero " << endl;

        cout << " 6 - Mostra o pedido mais caro e o mais barato" << endl;

        cout << " 7 - Encerra o programa " << endl;

        cout << "Informe: ";

        cin >> digito;



        while (digito < 1 || digito > 7)

        {

            cout << "Opcao invalida. Digite novamente:" << endl;

            cout << " 1 - Novo Pedido " << endl;

            cout << " 2 - Pedido Cocluido " << endl;

            cout << " 3 - Imprimir fila de pedidos " << endl;

            cout << " 4 - Conta a quantidade de pedidos em andamento " << endl;

            cout << " 5 - Busque um pedido pelo numero " << endl;

            cout << " 6 - Mostra o pedido mais caro e o mais barato" << endl;

            cout << " 7 - Encerra o programa " << endl;

            cout << "Informe: ";

            cin >> digito;

        }



        if (digito == 1) {

            cout << "Informe o preco do lanche:" << endl;

            cin >> preco;

            InserirPedido(preco);

        } else if (digito == 2) {

            ExcluirInicio();

            cout << "Pedido Concluido" << endl;

        } else if (digito == 3) {

            cout << "fila de pedidos" << endl;

            Imprimir();

        } else if (digito == 4) {

            Contador();

        } else if (digito == 5) {

            cout << "Informe o numero do pedido: ";

            cin >> p;

            BuscarPedido(p);

        } else if (digito == 6) {

            cout << "Os extremos:" << endl;

            ExtremidadesPreco();

        } else if (digito == 7) {

            cout << "Encerrando o programa..." << endl;

            return;

        }

    }

}



int main()

{

    Lista l;

    l.Criar();


    l.Menu();



    return 0;

}

