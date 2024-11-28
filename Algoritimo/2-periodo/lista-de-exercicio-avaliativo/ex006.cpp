#include<iostream>
#include<string>

using namespace std;

struct Hospital {

    string nome;
    string local;
    int numerofuncionarios;
    float valorMoney;
    int capacidadePaciente;

    void prencher (string nomen,string localn,int numero,float valor,int capacidade){
        nome = nomen;
        local = localn;
        numerofuncionarios = numero;
        valorMoney = valor;
        capacidadePaciente = capacidade;
    }

    void screen() {

        cout<< nome <<endl;
        cout<< local <<endl;
        cout<< numerofuncionarios <<endl;
        cout<< valorMoney <<endl;
        cout<< capacidadePaciente <<endl;
    }

};

int main (){

    Hospital H1,H2,H3;

    H1.prencher("aistens","rua alem vida", 100, 3456.654, 10000000);
    H2.prencher("aistens fgh","rua alem vida", 100, 3456.654, 10000000);
    H3.prencher("aistens dghj","rua alem vida", 100, 3456.654, 10000000);

    H1.screen();
    cout<<endl;
    H2.screen();
    cout<<endl;
    H3.screen();

    return 0;
}
