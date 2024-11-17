#include <iostream>

using namespace std;

int maiorValorVetor(int array[], int index );

    
int main (){

    int array[]  = {1,2,3,4,5,6,7,8,9,10,98765}, index = 11;

    int resposta = maiorValorVetor(array, index);

    cout<<resposta<<endl;




    return 0;
}


int maiorValorVetor(int array[], int index){

    if ( index == 1){
        return array[0];
    }

    int maior = maiorValorVetor(array, index -1);
    cout<<"maior: "<<maior<<endl;
    
   
    if ( array[index -1] > maior){

        maior = array[index -1];

    }
    
    return maior;



    

}