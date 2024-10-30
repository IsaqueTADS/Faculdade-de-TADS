#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    float note;

    cout<<"Digite a nota do aluno! "<<endl;
    cin>>note;

    if ( note >= 0 ){

        if( note == 0 ){

            cout<<"Nota "<<note<<" equivale a: E "<<endl;

        }else if ( note >= 1 && note <= 35 ){

            cout<<"Nota "<<note<<" equivale a: D "<<endl;

        }else if( note >= 36 && note <= 60){

            cout<<"Nota "<<note<<" equivale a: C "<<endl;

        } else if ( note >= 61 && note <= 85 ){

            cout<<"Nota "<<note<<" equivale a: B "<<endl;

        }else if ( note >= 86 && note <= 100 ){

            cout<<"Nota "<<note<<" equivale a: A "<<endl;
            
        }



    }else {
        cout<<"Nota inválida!!"<<endl;
    }





    return 0;
}