#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    int year;


    cout<<"Digite o ano: "<<endl;
    cin>>year;

    if( year >= 1) {
        if ( year %4 == 0 && year %100 != 0 ){



            cout<<"Ano bissexto! "<<endl;




        }else if (  year %400 == 0 && year %100 == 0 ){


            cout<<"Ano bissexto! "<<endl;
            
        }else{

            cout<<"Não é um bissexto "<<endl;
            
        }
     }else{

        cout<<"Ano inválido! "<<endl;
    }




    return 0;
}

//2100 exemplo de ano terminado em 00 que é divisivel por 4 porém não é bissexto.