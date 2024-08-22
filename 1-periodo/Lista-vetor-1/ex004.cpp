#include <iostream>


using namespace std;


int main (){

    int vetor[10];

    for ( int i = 0; i < 10; i ++ ){

        cout<<"Digite um valor para vetor na posisao: "<<i<<endl;
        cin>>vetor[i];
    }
    
    cout<<"teste"<<endl;
    
    int maior = -4,posisao = 0;

    for ( int i = 0; i < 10; i ++ ){
        if ( vetor[i] > maior){
            maior = vetor[i];
            posisao = i;
        }
    }

   

    cout<<"O maior numero e: "<<maior<<endl;
    cout<<"Posisao: "<<posisao<<endl;
    cout<<"teste 2 "<<endl;
    
    



    return 0;
}