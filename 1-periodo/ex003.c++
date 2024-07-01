#include<iostream>
#include<locale.h>
#include<stdbool.h> // uso para system("cls")
#include<cstdlib> //uso para eexit()
using namespace std;
#define WAGEM 1.412
int main(){
    setlocale(LC_ALL, "portuguese");
    int wage, qwagem;
   
    cout<<"Qual o valor do seu salario? "<<endl;
    cin>>wage;
     
    qwagem = wage / WAGEM;

    cout<<"Você recebe "<<qwagem<<"Salario minimos "<<endl;


    return 0;
}