#include <iostream>
#include <string>


using namespace std;

int main (){

    string Aprovados [10] = {"Isaque","Karla","Wellyton","Elizia","Farley","Vitoria", "Hugo","Cleiton","Rodrigo" };
    string consulta;
    int reprovador = 10;

    cout<<"Digite o seu nome! "<<endl;
    cin>>consulta;

    for ( int i = 0; i < 10; i ++ ){
        if ( consulta == Aprovados [i]){
            cout<<"Parabens "<<consulta<<"\nVoce foi aprovado(a)!! "<<endl;
            reprovador --;
        }
    }

    if ( reprovador == 10 ){
        cout<<consulta<<" Nao foi econtrado na lista de aprovados!! "<<endl;
    }
    



    return 0;
}