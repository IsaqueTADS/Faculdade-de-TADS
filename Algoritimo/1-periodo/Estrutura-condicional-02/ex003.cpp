#include <iostream>
#include <locale.h>

using namespace std;

int main () {
    setlocale(LC_ALL,"portuguese");

    float side1,side2,side3;

    cout<<"Digite lado A do seu triângulo! "<<endl;
    cin>>side1;
    cout<<"Digite lado B do seu triângulo! "<<endl;
    cin>>side2;
    cout<<"Digite lado C do seu triângulo! "<<endl;
    cin>>side3;

    if ( side1 == side2 && side1 == side3){


        cout<<"Seu triângulo é equilátero! "<<endl;


    }else if ( side1 == side2 || side1 == side3 || side2 == side3 ){

        cout<<"Seu triângulo isóceles! "<<endl;

    }else if ( side1 != side2 && side1 != side3 && side2 != side3 ){

        cout<<"Seu triângulo é escaleno! "<<endl;

    }else{

        cout<<"Valor de triângulo não reconhecido! "<<endl;
        
    }




    return 0;
}