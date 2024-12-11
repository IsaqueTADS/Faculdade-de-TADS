#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& array, int esquerda, int meio, int direita);
void mergeSort(vector<int>& array, int esquerda, int direita);

int main (){
    vector<int> array = {38,27,43,3,9,82,10,-1};
    int n = array.size();

    cout<<"Array desordenado"<<endl;
    for( int x : array) cout << x <<" ";
    cout<<endl;

    mergeSort(array, 0, n -1);

    cout<<"Array ordenado"<<endl;
    for(int x : array) cout<<x <<" "; 
    cout<< endl;


    return 0;
}

void merge(vector<int>& array, int esquerda, int meio, int direita){
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = array[esquerda + i ];
    for (int j = 0; j < n2; j ++) R[j] = array[meio + 1 + j];

    int i = 0, j = 0, k = esquerda;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1){
        array[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        array[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& array, int esquerda, int direita){
    if(esquerda < direita){
        int meio = esquerda + (direita - esquerda) / 2;

        mergeSort(array, esquerda, meio);
        mergeSort(array, meio + 1, direita);

        merge(array, esquerda, meio, direita);
    }
}