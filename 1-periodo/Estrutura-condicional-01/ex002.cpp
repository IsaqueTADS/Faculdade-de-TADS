#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

        int idade;
        float nota;

        cout<<"Indique sua idade!!"<<endl;
        cin>>idade;
        cout<<"Indique sua nota!!"<<endl;
        cin>>nota;

        if ( idade >= 18 && idade <= 30){

                if ( nota >= 70 ){

                    cout<<"Aprovado!\nNota suficiente: "<<nota<<"\nIdade adequada: "<<idade<<endl;

                }else{

                    cout<<"Reprovado!\nPor falta de nota: "<<nota<<"\nIdade correta: "<<idade<<endl;
                }


        }else if ( nota >=70) {


            cout<<"Reprovado!\nNota adequada: "<<nota<<"\nIdade inadequada: "<<idade<<endl;

         

        }else {

            cout<<"Reprovado! \nIdade inadequada: "<<idade<<"\nNota insuficiente: "<<nota<<endl;
        }
       



    return 0;
}