#include <iostream>

using namespace std;

int main (){

    int vetor [5] = {1,2,3,4,5};

    int* p = vetor;

    for( int i = 0; i < 5; i ++){

        cout<<*(p+i)<<endl;

    }
    cout<<endl;

    for( int i = 0; i < 5; i ++){
        cout<<p[i]<<endl;
    }




    return 0;
}