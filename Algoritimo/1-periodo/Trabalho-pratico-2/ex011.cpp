#include <iostream>
#include <cstdlib> //para rand()
#include <ctime> //para time ()

using namespace std;

int main (){

    int vetor [501];
    int  tentativas = 0, chute = 0,tentativaLocal = 0;

    for ( int i = 0; i < 501; i ++){

        vetor [i] = i;
        
    }
    srand(time(0));

    int indiceAleatorio = rand() % 501;
    int numAleatorio = vetor[indiceAleatorio];
    cout<<"Tente acertar o numero magico de 0 a 500 "<<endl;
    do{cin>>chute;
        
        tentativaLocal = chute;
        tentativas++;
        if( chute == numAleatorio){
            break;
        }
        if ( tentativaLocal > numAleatorio){
            cout<<tentativaLocal<<" e maior que o numero magico!! "<<endl;
        }else {
            cout<<tentativaLocal<<" e menor que o numero magico!! "<<endl;

        }
    } while ( chute != numAleatorio );
    
    cout<<"Voce acertou era: "<<numAleatorio<<endl;

    if ( tentativas >= 1 && tentativas <= 3 ){
        cout<<"muito sortudo\nTentativas: "<<tentativas<<endl;
    }
    if ( tentativas >= 4 && tentativas <= 6 ){
        cout<<"sortudo\nTentativas: "<<tentativas<<endl;
    }
    if ( tentativas >= 7 && tentativas <= 10 ){
        cout<<"muito normal\nTentativas: "<<tentativas<<endl;
    }

    if ( tentativas > 10 ){
        cout<<"Tente novamante\nTentativas maior que 10:  "<<tentativas<<endl;
    }



    return 0;
}