#include <iostream>
#include <string>


using namespace std;

int main (){

    string perguntas[5] = {"Voce tem febre? ", "Esta com tosse seca? ", "Sente dificuldade para respirar? ", "Perdeu o olfato ou paladar? ", "Esta com dores no corpo? "};
    int resposta = 0, cont = 0;

    for ( int i = 0 ; i < 5 ; i ++ ){
        cout<<perguntas[i]<<endl;
        cout<<"Digite\n0 para nao\n1 para sim "<<endl;
        cin>>resposta;
        
        if ( resposta == 1 ){
            cont++;
        }

    }

    if ( cont >= 0 && cont < 1 ){
        cout<<"Sintomas leves\nMonitore!! "<<endl;
    }else if ( cont >= 2 && cont <= 3 ){
        cout<<"Sintomas moderados\nConsiderar um teste de COVID-19 "<<endl;
    }else if ( cont >= 4 && cont >= 5 ){
        cout<<"Sintomas graves\nBuscar orientacao medica IMEDIATAMENTE! "<<endl;
    }



    return 0;
}