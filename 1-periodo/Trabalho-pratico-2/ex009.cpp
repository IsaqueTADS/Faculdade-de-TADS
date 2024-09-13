#include <iostream>

using namespace std;

int main (){

    int num = -1, divExata = 0;
    float divisao = 0;

    cout<<"Digite um numero inteiro qualquer! "<<endl;
    cin>>num;

    for ( int i = 1; i <= 100; i ++ ){
        divisao = num % i;
        
        if ( divisao == 0 ){
            divExata++;
        }
 
    }

    if ( divExata == 2 ){
        cout<<num<<" e um numero primo "<<endl;
    }else{
        cout<<num<<" nao e um numero primo! "<<endl;
    }



    return 0;
}