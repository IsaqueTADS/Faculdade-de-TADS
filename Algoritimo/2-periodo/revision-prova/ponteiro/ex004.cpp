#include <iostream>

using namespace std;

int main (){

    int vetor [6] = {1,2,3,4,5,6};

    int soma = 0;

    int* p = vetor;

    for( int i = 0; i < 6; i ++){

       soma+= *(p+i);

    }
    
    cout<<soma<<endl;

  


    return 0;
}