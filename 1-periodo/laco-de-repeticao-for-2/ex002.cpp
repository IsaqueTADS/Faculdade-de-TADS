#include <iostream>

using namespace std;

int main (){

    int Nnum;
    float Enum = 1.0 ;

    cout<<"Digite um valor inteiro para N"<<endl;
    cin>>Nnum;

    for ( int i = 1 ; i < Nnum ; i ++ ){
        Enum += ( 1 / i);
        

        
    }

    cout<<"Enum : "<<Enum<<endl;




    return 0;
}