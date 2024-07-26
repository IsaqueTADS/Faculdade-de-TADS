#include <iostream>
#include <locale.h>
#include <stdbool.h> //system("cls")
#include <cstdlib> //exit()

using namespace std;

int main (){

    setlocale(LC_ALL,"portuguese_Brazil");
    int number;

    cout<<"digite um número qualquer "<<endl;
    cin>>number;

    if(number %2 == 0 && number %3 == 0){

        cout<<number<< " é divisivel por 2 e por 3 ao mesmo tempo"<<endl;

    }else{

        cout<<number<<" não é divisivel por 2 e 3 ao mesmo tempo"<<endl;
        
    }


    return 0;
}
