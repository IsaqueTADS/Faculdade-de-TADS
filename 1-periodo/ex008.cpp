#include <iostream>
#include <locale.h>
#include <stdbool.h> //system("cls")
#include <cstdlib> //exit()

using namespace std;

int main (){

    setlocale(LC_ALL,"portuguese_Brazil");
    int number;

    cout<<"Digite um n�mero qualquer "<<endl;
    cin>>number;

    if (number %5 == 0 || number %7 == 0){

        if( number %5 == 0 ){
            cout<<number<<" �  divis�vel por 5 "<<endl;
        }else {
            cout<<number<< " N�o � divis�vel por 5 "<<endl;
        }

        if ( number %7 == 0){
            cout<<number<<" � divis�vel por 7 "<<endl;
        }else{
            cout<<number<<" N�o � divis�vel por 7 "<<endl;
        }
       
    
    }else{
        cout<<"n�o � divisivel por nenhum dos dois"<<endl;
    }


    return 0;
}
