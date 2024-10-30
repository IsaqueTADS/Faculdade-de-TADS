#include <iostream>

using namespace std;

int main (){

    int idade,menor18 = 0;
    float altura, peso=0,taltura=0,tpeso=0,maior80=0,qjogador=0,tidade=0;


    for ( int i = 1 ; i <= 5 ; i ++ ){
        cout<<"INFORME OS DADOS DO TIME: "<<i<<endl;
        for ( int j = 1 ; j <= 11 ; j ++ ){
            cout<<"Digite a idade do jogador: "<<j<<endl;
            cin>>idade;
            cout<<"Digite a altura do jogador: "<<j<<endl;
            cin>>altura;
            cout<<"Digite o peso do jogador: "<<j<<endl;
            cin>>peso;

            tidade = tidade + idade;
            taltura = taltura + altura;
            tpeso = tpeso + peso;
            qjogador = qjogador + 1;
            if ( idade > 0 && idade <= 18 ){
                menor18 = menor18 +1;
            }
            if ( peso > 80 ){
                maior80 = maior80 + 1;
            }




        }


    }


        float mediaidade = tidade / qjogador;
        float mediaaltura = taltura / qjogador;
        float porcemaior80 = (maior80 / qjogador) * 100;

        cout<<"RESULTADO!!\nMenores de 18: "<<menor18<<"\nA media de idade: "<<mediaidade<<"\nA media de altura e: "<<mediaaltura<<"\nPorcentagem de jogadores com mais de 80Kg: "<<porcemaior80<<endl;

    



    return 0;
}