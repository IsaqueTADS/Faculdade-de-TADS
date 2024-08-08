#include <iostream>
using namespace std;
int main (){

    int soma = 0;

    for ( int i = 1 ; i <= 50 ; i ++ ){
        if ( i %2 == 0 ){
            soma += i;
            cout<<i<<" Soma r: "<<soma<<endl;;
        }
    }
    cout<<"Soma total: "<<soma<<endl;
    return 0;
}