#include <iostream>

using namespace std;

int main (){
    int array[8] = {1,2,3,4,5,6,7,8};
    int tamanho = sizeof(array) / sizeof(array[1]);
    int alvo = 5,inicio = 0, fim = tamanho -1; 
    bool achou = false;

    while( inicio <= fim ){
        int meio = (inicio + fim) / 2;
        if(alvo == array[meio]){
            achou = true;
            break;
        }
        if(alvo > array[meio]) inicio = meio + 1; 
        if(alvo < array[meio]) fim = meio - 1;
        
    }

    if(achou) cout<<"achou"<<endl;
    else cout<<"valor nao pertence ao array"<<endl;

    return 0;
}