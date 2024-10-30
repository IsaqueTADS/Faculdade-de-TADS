#include <iostream>

using namespace std;

int main (){

    int eleitores=0,isaque=0,vitoria=0,hugo=0,votos=0;
    string isa = "isaque", vit = "vitoria", hug = "hugo";

    cout<<"Digite quantos eleitores vao votar "<<endl;
    cin>>eleitores;

    cout<<"URNA DE VOTACAO 2024"<<endl;
    cout<<"[1] para isaque "<<endl;
    cout<<"[2] para vitoria "<<endl;
    cout<<"[3] para hugo "<<endl;
    cout<<"Digite o numero do canditado que quer votar "<<endl;

    for ( int i = 0 ; i < eleitores ; i ++){
      
        cin>>votos;

        if ( votos == 1 ){
            isaque ++;
        }else if ( votos == 2 ){
            vitoria ++;
        }else if ( votos == 3 ){
            hugo ++;
        }else  {
            cout<<"Voto invalido "<<endl;
            break;
        }

    }

    cout<<"Isaque teve : "<<isaque<<" votos"<<endl;
    cout<<"Vitoria teve : "<<vitoria<<" votos"<<endl;
    cout<<"Hugo teve : "<<hugo<<" votos\n"<<endl;

    if ( isaque > vitoria && isaque > hugo ){
        cout<<isa<<" vencedor! "<<endl;
    }else if ( vitoria > isaque && vitoria > hugo ){
        cout<<vit<<" vencedora! "<<endl;
    }else if ( hugo > vitoria && hugo > isaque ){
        cout<<hug<<" vencedor! "<<endl;
    }else if ( isaque == vitoria && isaque == hugo ){
        cout<<"Empate "<<"\nIsaque: "<<isaque<<"\nVitoria: "<<vitoria<<"\nHugo: "<<hugo<<endl;
    }




    return 0;
}