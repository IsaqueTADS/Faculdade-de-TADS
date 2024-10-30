#include<iostream>

using namespace std;

int main (){

    float nota = 0;

    cout<<"Digite uma nota entre 0 e 10"<<endl;
    cin>>nota;

    while ( nota < 0 || nota > 10 ){
        cout<<"{ERRO] Digite uma nota entre 0 e 10"<<endl;
        cin>>nota;    
    }
    cout<<"Valor aprovado"<<endl;

    return 0;
}