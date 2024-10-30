#include <iostream>


using namespace std;

int main (){

    int Ntabuada = 0, Ninicio = 0, Nfinal = 0, res = 0;
    cout<<"Digite o numero que queira ter a tabuada! "<<endl;
    cin>>Ntabuada;
    cout<<"Digite o inicio da tabuada! "<<endl;
    cin>>Ninicio;
    cout<<"Digite o numero final da tabuada! "<<endl;
    cin>>Nfinal;
    while( Nfinal < Ninicio ){
        cout<<"[ERRO] O numero final não pode ser maenorque o inicio\nDigite novamente! "<<endl;
        cin>>Nfinal;
    }


    for ( int i = Ninicio; i <= Nfinal; i ++){

        res = Ntabuada * i;

        cout<<Ntabuada<<" X "<<i<<" = "<<res<<endl;

    }
    


    return 0;
}