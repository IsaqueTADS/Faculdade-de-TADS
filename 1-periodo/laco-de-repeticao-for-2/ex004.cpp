#include <iostream>

using namespace std;


int main (){
    float nota = 0, alunos = 30,turma = 5,contAluno = 0,mediapro = 0,mediarepro = 0, percentualNota = 0, notaTotal = 0,aprovados = 0,reprovados = 0;
    int idade = 0,repmenor18 = 0 ;

    for ( int i = 1 ; i <= turma ; i ++ ){

        cout<<"Turma: "<<i<<endl;

        for ( int j = 1 ; j <= alunos ; j ++ ){
            cout<<"Idade do aluno: "<<j<<endl;
            cin>>idade;
            cout<<"Nota do aluno: "<<j<<endl;
            cin>>nota;
            notaTotal += nota;
            contAluno ++;

            if ( nota >= 60 ){
                aprovados+=1;
            }else{
                reprovados+=1;
                if( idade < 18 ){
                    repmenor18+=1;
                }
            }
            
        }
    }
    mediapro = aprovados / contAluno;
    mediarepro = reprovados / contAluno;
    percentualNota = notaTotal / 15.5;

    cout<<"Aprovados: "<<aprovados<<endl;
    cout<<"Reprovados: "<<reprovados<<endl;
    cout<<"Reprovados menor 18: "<<repmenor18<<endl;
    cout<<"Media reprovacao : "<<mediarepro<<endl;
    cout<<"Media aprovacao: "<<mediapro<<endl;
    cout<<"percentual de nota: "<<percentualNota<<"%"<<endl;


    return 0;
}