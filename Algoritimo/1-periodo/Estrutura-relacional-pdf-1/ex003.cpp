#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

        float value_A, value_B,value_C;

        cout<<"Digite um valora para A : "<<endl;
        cin>>value_A;
        cout<<"Digite um valora para B : "<<endl;
        cin>>value_B;
        cout<<"Digite um valora para C : "<<endl;
        cin>>value_C;

        if ( value_A + value_B < value_C ){

            cout<<"A soma entre "<<value_A<<" + "<<value_B<<" é menor que: "<<value_C<<endl;

        }else if ( value_A + value_B > value_C){

            cout<<"A soma entre "<<value_A<<" + "<<value_B<<" é maior que: "<<value_C<<endl;


        }else{

            cout<<"A soma entre "<<value_A<<" + "<<value_B<<" é igual a: "<<value_C<<endl;

        }



    return 0;
}