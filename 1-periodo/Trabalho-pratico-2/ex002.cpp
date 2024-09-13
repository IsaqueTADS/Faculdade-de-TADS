#include <iostream>

using namespace std;

int main (){

    
    float idade = 0, peso = 0, altura = 0,conjutoDados = 0, somaIdades = 0, pessoas90kg = 0, faixaEtaria = 0,altura1e90 = 0;
   

    cout<<"Digite a quantidade de dados a serem lidos "<<endl;
    cin>>conjutoDados;

    for ( int i = 0; i < conjutoDados; i ++ ){
        cout<<"Digite a idade da pessoa: "<<i+1<<endl;
        cin>>idade;
        cout<<"Digite a altura da pessoa: "<<i+1<<endl;
        cin>>altura;
        cout<<"Digite o peso da pessoa: "<<i+1<<endl;
        cin>>peso;
        somaIdades += idade;

        if ( peso > 90 && altura < 1.50){
            pessoas90kg++;
        }
        if ( idade >= 10 && idade <= 30 ){
            faixaEtaria++;
        }
        if ( altura > 1.90 ){
            altura1e90++;
        }


    }

    float mediaIdades = somaIdades / conjutoDados;
    float porcentagem = (faixaEtaria / altura1e90) * 100;



    cout<<"A media das idades e: "<<mediaIdades<<endl;
    cout<<"Quantidade de pessoas com mais de 90kg e inferior a 1.50 e : "<<pessoas90kg<<endl;
    cout<<"A porcentagem de idade entre 10 e 30 anos : "<<faixaEtaria<<"\nE pessoas que medem mais de 1m90 "<<altura1e90<<"\nResultado: "<<porcentagem<<"%"<<endl;





    return 0;
}