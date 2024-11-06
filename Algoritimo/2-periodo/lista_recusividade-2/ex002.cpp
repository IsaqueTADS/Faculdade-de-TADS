#include <iostream>


using namespace std;

int conversorBinario ( int number );

int main (){

    int number = 12;
    
    conversorBinario(number);

    

    return 0;
}


int conversorBinario ( int number){
    if ( number == 0 ){
        return 0;
    }
    conversorBinario(number / 2) ;

    cout<<number%2;
}