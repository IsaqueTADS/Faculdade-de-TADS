#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

    int nivel, peso;

    cout<<"Digte o nivel do seu veiculo!"<<endl;
    cout<<"[1] Nivel 1\n[2]Nível\n[3]\nNível"<<endl;
    cout<<"Escolha uma das opções acima! "<<endl;
    cin>>nivel;

    cout<<"Qual o peso do seu veículo? "<<endl;
    cin>>peso;

    if ( nivel == 1){

        if( peso >= 100 && peso >= 200){

            cout<<"Peso adequado!"<<endl;

        }else{

            cout<<"Peso inadequado"<<endl;

        }

    }
    if ( nivel == 2 || nivel ==3 ){

        if (peso >=201 && peso <= 300 ){

            cout<<"Peso adequado"<<endl;

        }else{

            cout<<"Peso inadequado"<<endl;
        }
    }



    return 0;
}