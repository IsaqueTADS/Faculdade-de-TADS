#include <iostream>


using namespace std;

int main (){

    const int numSalto = 5;
    const int quantAtleta  = 2;
    float maiorMedia = -100 , menorMedia = 10000,  indiMaior = 0, indiMenor = 0;
    
    float soma = 0, salto = 0, media = 0;
    

    for ( int i = 0 ; i < quantAtleta; i ++ ){
        cout<<"Digite os saltos do atleta: "<<i+1<<endl;
        soma = 0;
        for ( int j = 0; j < numSalto; j++){
            cout<<"Salto : "<<j+1<<endl;
            cin >> salto;
            soma = soma + salto;
                
        }
            media = soma / numSalto;

            if ( media > maiorMedia){

                maiorMedia = media;
                indiMaior = i+1;

            }
            if ( media < menorMedia ){

                menorMedia = media;
                indiMenor = i+1;
            }

        cout<<"Media do jogador: "<<i+1<<" foi de: "<<media<<endl;
        
    }

    cout<<"A media maior foi do jogador: "<<indiMaior<<" com media de: "<<maiorMedia<<endl;
    cout<<"A menor media foi do jogador: "<<indiMenor<<" com media de: "<<menorMedia<<endl; 
    


    return 0;
}