#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

    int value1,value2,value3;

    cout<<"Digite um valor inteiro! "<<endl;
    cin>>value1;
    cout<<"Digite um valor inteiro! "<<endl;
    cin>>value2;
    cout<<"Digite um valor inteiro! "<<endl;
    cin>>value3;

    if ( value3 >= value1 && value3 <=value2 || value3 >= value2 && value3 <= value1){

        cout<<value3<<" Est� entre "<<value1<<" e "<<value2;
    }else{

        cout<<value3<<" N�o est� entre "<<value1<<" e "<<value2;


    }
    


    return 0;
}