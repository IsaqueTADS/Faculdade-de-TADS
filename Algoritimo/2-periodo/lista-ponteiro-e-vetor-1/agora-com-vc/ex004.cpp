#include<iostream>

using namespace std;

int main (){

    int vetor[4], alvo;
    bool ativo =  true;

    int* v = vetor;

    for (int i = 0; i  < 4; i++) cin>> *(v + i);
    cout<<"digite o alvo "<<endl;
    cin>>alvo;
    for (int i = 0; i  < 4; i++) if (*(v + i) == alvo) cout<< "o numero pertence: "<< *(v + i) <<endl; else ativo = false;

    if (!ativo)cout<<"numero nao pertence ao array"<<endl;

    return 0;
}
