#include <iostream>

using namespace std;

int main () {

    int number,fator=1;

    cout<<"Digite um numero inteiro e que seja positivo "<<endl;
    cin>>number;

    for ( int i = number ; i > 0 ; i -- ){
        
        fator = fator * i;
        
     if ( fator != number ){
        cout<<fator<<" X "<<i<< " : " <<fator<<endl;
     }  

    }

    cout<<"o fatorial de "<<number<<" e: "<<fator<<endl;





    return 0;
}