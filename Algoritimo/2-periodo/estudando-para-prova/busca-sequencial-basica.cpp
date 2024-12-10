#include<iostream>

using namespace std;

int main (){
    int vetor [5] = {20,50,10,4,10};
    int alvo = -1;
    bool achou = false;

    for ( int i = 0; i < 5; i++){

        if ( alvo == vetor[i]){
            achou = true;
        }

    }

    if(achou){
        cout<<"achou"<<endl;
    }else {
        cout<<"não achou"<<endl;
    }



    return 0;
}