#include<iostream>
#include<locale.h>

using namespace std;

int main (){
    
    setlocale(LC_ALL,"portuguese");

    float wage,inflation, adjustedsalary;

    cout<<"Digite seu salário!"<<endl;
    cin>>wage;
    cout<<"Digite o índice da inflação!"<<endl;
    cin>>inflation;

    inflation /=  100;

    adjustedsalary = wage + (wage *inflation);

    cout<<"Com o índice da inflação em: "<<inflation<<"\nO ajuste do salário fica: "<<adjustedsalary<<endl;

        
        
        
        

    return 0;  
}
  




