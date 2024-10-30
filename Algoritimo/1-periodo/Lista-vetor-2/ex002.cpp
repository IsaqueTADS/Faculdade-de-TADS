#include <iostream>


using namespace std;

int main (){


    char resposta[5];
    char respostaCorreta[5] = {'a','e','d','c','b'};
    int acertos = 0;

    for ( int i = 0; i < 5 ; i ++ ){
        cout<<"Digite a respota da questão: "<<i+1<<endl;
        cin>>resposta[i];
        if( resposta[i] == respostaCorreta[i]){
            acertos++;
        }

    }

    cout<<"Quantas o aluno acertou: "<<acertos<<endl;

    if ( acertos >= 5 ){
        cout<<"Aprovado com: "<<acertos<<" acertos"<<endl;
    }else{
        cout<<"Reprovado com: "<<acertos<<" acertos"<<endl;
    }
    



    return 0;
}