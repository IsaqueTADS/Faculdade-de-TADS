#include <iostream>

using namespace std;

int buscaBinaria(int array[], int inicio, int fim,int alvo);

int main (){
    int array [8] = {1,2,3,4,5,6,7,8};
    int alvo = 1;
    int tamanho = sizeof(array) /  sizeof(array[1]);
    int resultado = buscaBinaria(array,0,tamanho-1,alvo);

    if(resultado != -1)cout<<"achou"<<endl;
    else cout<<"valor nao econtrado"<<endl;
    
    return 0;
}

int buscaBinaria(int array[], int inicio, int fim, int alvo){
    if ( inicio > fim ) return -1;

    int meio = (inicio + fim) / 2;
    
    if(array[meio] == alvo) return meio;
    else if(array[meio] < alvo) return buscaBinaria(array, meio + 1,fim,alvo);
    else return buscaBinaria(array, inicio, meio - 1,alvo);
}