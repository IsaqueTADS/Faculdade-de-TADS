#include <iostream>


using namespace std;

int main (){

    int niveSas = 0;

    cout<<"NIVEL DE SASTIFACAO"<<endl;
    cout<<"[1] muito insatifeito "<<endl;
    cout<<"[2] insastifeito  "<<endl;
    cout<<"[3] mediano "<<endl;
    cout<<"[4] bom "<<endl;
    cout<<"[5] excelente"<<endl;
    cin>>niveSas;
    while ( niveSas < 0 || niveSas > 5 ){
        cout<<"[ERRO] O nivel de sastifacao tem quer de 1 a 5\nDigite outra novamente! "<<endl;
        cin>>niveSas;
    }

    cout<<"Res: "<<niveSas<<endl;



    return 0;
}