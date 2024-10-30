#include <iostream>


using namespace std;

float temperatura[12];
int numMeses = 12;

float somaMes(float temperatura[], int numMeses);

int main (){
    
    for ( int i = 0; i < numMeses ; i ++ ){

        cout<<"Digite a temperatura do mês "<<i+1<<endl;
        cin>>temperatura[i];
        
    }
    
    float somaFinal = somaMes(temperatura,numMeses);

    float mediaAnual = somaFinal/numMeses;

    cout<<"Media: "<<mediaAnual<<endl;
    
    for ( int j = 0; j < numMeses; j ++){
        if ( temperatura[j] > mediaAnual){
            cout<<"Mes: "<<j+1<<" esta acima da media\ntemperatura de: "<<temperatura[j]<<endl;
        }
    }

    return 0;
}

float somaMes ( float temperatura[], int numMeses){
    float somaFunc = 0;
    for ( int i = 0 ; i < numMeses; i++ ){

        somaFunc= somaFunc + temperatura[i];

    }
    
    return somaFunc;

}