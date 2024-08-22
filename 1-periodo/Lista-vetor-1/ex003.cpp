#include <iostream>


using namespace std;


int main (){

    int vetor[8];

    for ( int i = 0; i < 8; i++ ){
        cout<<"Digite um valor para posisao do vetor: "<<i<<endl;
        cin>>vetor[i];
    }

    int X = 0,Y = 0;

    cout<<"Dite um valor para X "<<endl;
    cin>>X;
    cout<<"Digite um valor para Y "<<endl;
    cin>>Y;

    float soma = vetor[X] + vetor[Y];

    cout<<"Soma de X: "<<vetor[X]<<" + Y: "<<vetor[Y]<<endl;
    cout<<"Resultado: "<<soma<<endl;



    return 0;
}