#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");
    
        float lado1,lado2,lado3;

        cout<<"Digite o lado 1 do seu triangulo!"<<endl;
        cin>>lado1;
        cout<<"Digite o lado 2 do seu triangulo!"<<endl;
        cin>>lado2;
        cout<<"Digite o lado 3 do seu triangulo!"<<endl;
        cin>>lado3;

        if ( lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){

            cout<<"É um triângulo! "<<endl;
        }else{

            cout<<"Não é um triângulo! "<<endl;

        }



    return 0;
}