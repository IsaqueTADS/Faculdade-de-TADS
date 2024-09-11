#include<iostream>
#include<locale.h>
#include<stdbool.h> // uso para system("cls")
#include<cstdlib> //uso para eexit()
using namespace std;
int main(){
    setlocale(LC_ALL, "portuguese");

        double number1,number2,percentage;

        cout<<"Digite o primeiro numero: "<<endl;
        cin>>number1;
        
        cout<<"Digite um numero maior que o primeiro: "<<endl;  
        
            do{cin>>number2;

                if (number1 >= number2){

                system("cls"); 
                cout<< "[ERRO] Digite um numero maior que o primeiro!!" <<endl;
                }

            }while (number1 >= number2);
    

        system("cls");
        percentage = (number1 / number2) * 100;
        cout<<"Numero "<<number2<< " representa "<< percentage <<" % de "<<number1<<endl;
        


    return 0;
}