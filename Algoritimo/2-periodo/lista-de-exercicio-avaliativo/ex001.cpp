#include<iostream>

using namespace std;


int main (){
    int tamanho = 10;
    int cont = 0;
    int array [tamanho];
    int maior = -1;
    int menor = 1000000;
    
    while(tamanho > cont){
        cout<<"Digite um valor para prencher o vetor, limite 10 "<<endl;
        cin>>array[cont];
        cont++;
    }
   
    for(int i = 0; i < 10; i ++) {
        if(array[i] > maior) maior = array[i];
        if(array[i] < menor) menor = array[i];
    }

    cout<<"maior: "<<maior<<endl;
    cout<<"menor: "<<menor<<endl;


    return 0;
}