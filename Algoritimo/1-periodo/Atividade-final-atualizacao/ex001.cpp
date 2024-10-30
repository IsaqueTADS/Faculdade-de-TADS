#include <iostream>
#include <string>
using namespace std;


struct Medico {
    string nome;
    int crm;
    string especialidade;

    void Construtor (string nome1, int crm1, string especialidade1){
        nome = nome1;
        crm = crm1;
        especialidade = especialidade1;
    }

    void scrennClass (){
        cout<<"nome: "<<nome<<endl;
        cout<<"crm: "<<crm<<endl;
        cout<<"especialidade: "<<especialidade<<endl;
    }
};

int main (){
    Medico brabo;
    brabo.Construtor ("Dr isaque", 30000, "Concerta computador");

    brabo.scrennClass();

    


    return 0;
}