#include<iostream>
#include<locale.h>
#include<math.h>
#include<stdbool.h> // uso para system("cls")
#include<cstdlib> //uso para eexit()
#include<iomanip> //uso para fixed e setprecisiom()

using namespace std;

int main(){

    setlocale(LC_ALL, "portuguese");

        double wage, miniwage,totalminiwage;
    
    
        cout<<"Qual o valor do seu salario? "<<endl;
        cin>>wage;
        cout<<"Qual valor do salário minimo atualmente?  "<<endl;
        cin>>miniwage;

        totalminiwage = ( wage / miniwage);
    

        cout<< fixed << setprecision(2);
        cout<<"Você recebe "<<totalminiwage<<" Salarios minimos "<<endl;


    return 0;
}