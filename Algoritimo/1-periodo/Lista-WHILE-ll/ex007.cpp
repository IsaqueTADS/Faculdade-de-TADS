#include <iostream>


using namespace std;

int main (){

    int alunos=0;
    float peso=0,soma=0,contAlu=0;

    cout<<"Quantos alunos voce tem? "<<endl;
    cin>>alunos;

    int i = 1;
    while ( i <= alunos){
        cout<<"Digite o peso do aluno "<<i<<endl;
        cin>>peso;
        contAlu++;
        soma = soma + peso;
        i++;
    }

    float media = soma / contAlu;
    cout<<"A media do peso e: "<<media<<endl;



    return 0;
}