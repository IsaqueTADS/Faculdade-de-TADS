#include<iostream>
#include<locale.h>
#include<stdbool.h> // uso para system("cls")
#include<cstdlib> //uso para eexit()
using namespace std;
int main(){
    setlocale(LC_ALL, "portuguese");
    double number1,number2,res;

    cout<<"Digite o primeiro numero: "<<endl;
    cin>>number1;
    cout<<"Digite um numero maior que o primeiro: "<<endl;
    cin>>number2;
    system("cls");
    res = (number1 / number2) * 100;
    cout<<"Numero 2 representa "<<res<<"% do numero 1"<<endl;
    


    return 0;
}