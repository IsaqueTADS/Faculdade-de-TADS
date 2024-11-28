#include<iostream>


using namespace std;
struct Parati
{
    string nome_comunidade;
    int quantidade_moradores;
    float rendaMedia;
    float pesoMedio;

    void prencher (string nome, int quantidade,float renda, float peso){
      nome_comunidade = nome;
      quantidade_moradores = quantidade;
      rendaMedia = renda;
      pesoMedio = peso;
    }

    void mostrar(){
    cout<<nome_comunidade<<endl;
    cout<<quantidade_moradores<<endl;
    cout<<rendaMedia<<endl;
    cout<<pesoMedio<<endl;
    }
};

int main (){


    Parati comunidade1;
    Parati comunidade2;
    Parati comunidade3;

 

   comunidade1.prencher("morrinhos", 2, 40, 100);
   comunidade2.prencher("lagoinha",1,1,1);
   comunidade3.prencher("sete aguas carpadas",4,5,6);

   comunidade1.mostrar();
   comunidade2.mostrar();
   comunidade3.mostrar();



    
    


    return 0;
}