#include <iostream>
#include <locale.h>
#include <stdbool.h> //system("cls")
#include <cstdlib> //exit()

using namespace std;

int main (){

    setlocale(LC_ALL,"portuguese_Brazil");
    float number;

    cout<<"Digite um número qualquer "<<endl;
    cin>>number;

    if (number %5 == 0 || number %7){

        cout<<number<<"é dividivel por 5";
    
    }else if (number %7 == 0){

        cout<<number<<"é dividivel por 7";

    }else{
        cout<<"não é divisivel por nenhum dos dois"<<endl;
    }


    return 0;
}
