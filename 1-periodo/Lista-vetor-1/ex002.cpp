#include <iostream>
#include <locale.h>

using namespace std;


int main (){
    setlocale(LC_ALL,"portuguese");

    string crimeVeri [5];
    int perguntas = 5, sim = 0, nao = 0;

    cout<<"Telefonou para vitima ? "<<endl;
    cout<<"Digite: S para sim ou N para não "<<endl;
    do{cin>>crimeVeri[0];

        if(  crimeVeri[0] != "s" && crimeVeri[0] != "S" && crimeVeri[0] != "n" && crimeVeri[0] != "N" ){

            cout<<"[ERRO] Digite novamente! "<<endl;
        }

    }while( crimeVeri[0] != "s" && crimeVeri[0] != "S" && crimeVeri[0] != "n" && crimeVeri[0] != "N" );
        
    cout<<"Esteve no local do crime "<<endl;
    cout<<"Digite: S para sim ou N para não "<<endl;
    do{cin>>crimeVeri[1];

    if(  crimeVeri[1] != "s" && crimeVeri[1] != "S" && crimeVeri[1] != "n" &&   crimeVeri[1] != "N" ){

        cout<<"[ERRO] Digite novamente! "<<endl;

    }
    }while( crimeVeri[1] != "s" && crimeVeri[1] != "S" && crimeVeri[1] != "n" && crimeVeri[1] != "N" );

        
    cout<<"Mora perto da vitima? "<<endl;
    cout<<"Digite: S para sim ou N para não "<<endl;
    do{cin>>crimeVeri[2];

        if(  crimeVeri[2] != "s" && crimeVeri[2] != "S" && crimeVeri[2] != "n" && crimeVeri[2] != "N" ){

            cout<<"[ERRO] Digite novamente! "<<endl;

        }

    }while( crimeVeri[2] != "s" && crimeVeri[2] != "S" && crimeVeri[2] != "n" && crimeVeri[2] != "N" ); 

    cout<<"Devia para vitima? "<<endl;
    cout<<"Digite: S para sim ou N para não "<<endl;
    do{cin>>crimeVeri[3];

        if(  crimeVeri[3] != "s" && crimeVeri[3] != "S" && crimeVeri[3] != "n" &&   crimeVeri[3] != "N" ){

            cout<<"[ERRO] Digite novamente! "<<endl;

        }

    }while( crimeVeri[3] != "s" && crimeVeri[3] != "S" && crimeVeri[3] != "n" && crimeVeri[3] != "N" );
        

    cout<<"Já trabalhou com a vitima? "<<endl;
    cout<<"Digite: S para sim ou N para não "<<endl;
    do{cin>>crimeVeri[4];

        if(  crimeVeri[4] != "s" && crimeVeri[4] != "S" && crimeVeri[4] != "n" &&   crimeVeri[4] != "N" ){

            cout<<"[ERRO] Digite novamente! "<<endl;

        }
        
    }while( crimeVeri[4] != "s" && crimeVeri[4] != "S" && crimeVeri[4] != "n" && crimeVeri[4] != "N" );
        

    for ( int i = 0; i < perguntas; i++ ){

        if ( crimeVeri[i] == "s"|| crimeVeri[i] == "S"){

            sim++;

        }
        if ( crimeVeri[i] == "n" || crimeVeri[i] == "N"){

            nao++;
        }

    }

    if ( sim == 2 ){
        cout<<"Pessoa suspeita!\nQuantidade de sim: "<<sim<<endl;
    }
        if ( sim == 3 || sim == 4 ){
        cout<<"Pessoa Cúmplice!\nQuantidade de sim: "<<sim<<endl;
    }
        if ( sim == 5 ){
        cout<<"ASSASSINO!\nQuantidade de sim: "<<sim<<endl;
    }



    return 0;
}