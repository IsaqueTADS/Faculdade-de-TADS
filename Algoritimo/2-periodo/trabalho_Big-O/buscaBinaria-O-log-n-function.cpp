#include <iostream>

using namespace std;

bool buscaBinaria (int array[],int tamanho, int alvo);

int main (){
    int array[8] = {1,2,3,4,5,6,7,8};
    int tamanho = sizeof(array) / sizeof(array[1]);
    int alvo = 8;
    bool resultado = buscaBinaria(array,tamanho,alvo); 

    if(resultado) cout<<"achou"<<endl;  
    else cout<<"valor nao pertence ao array"<<endl;
    
    return 0;
}

bool buscaBinaria (int array[],int tamanho, int alvo){
    int inicio = 0, fim = tamanho -1;
    while( inicio <= fim ){
        int meio = (inicio + fim) / 2;
        if(alvo == array[meio]) return array[meio];
        if(alvo > array[meio]) inicio = meio + 1; 
        if(alvo < array[meio]) fim = meio - 1;
    }
}