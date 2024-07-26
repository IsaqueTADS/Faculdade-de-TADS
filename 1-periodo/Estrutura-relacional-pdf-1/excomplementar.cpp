#include <iostream>
#include <locale.h>

using namespace std;

int main (){

    setlocale(LC_ALL,"portuguese_Brazil");

     int age;

     cout<<"Digite a sua idade: "<<endl;
     cin>>age;

     if ( age >= 17 && age <= 32){

        cout<<"Recebe o beneficio " <<endl;

     }else{

        cout<<"não recebe " <<endl;
     }





    return 0;
}