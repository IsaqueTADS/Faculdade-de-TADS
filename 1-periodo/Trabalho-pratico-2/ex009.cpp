#include <iostream>

using namespace std;

int main (){

    int num = 0;

    cout<<"Digite um numero inteiro qualquer! "<<endl;
    cin>>num;

    if ( num == 2 || num == 3 ){
        cout<<num<<" e um numero primo! "<<endl;
    }else if ( num % 2 == 0 || num % 3 == 0  || num % 5 == 0 || num % 7 == 0){
        cout<<num<<" nao e um numero primo "<<endl;
    }else{
        cout<<num<<" e um numero primo! "<<endl;
    }



    return 0;
}