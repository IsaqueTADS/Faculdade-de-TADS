#include<iostream>
#include<locale.h>

using namespace std;

int main (){
    
    setlocale(LC_ALL,"portuguese");

    float wage,inflation, adjustedsalary;

    cout<<"Digite seu sal�rio!"<<endl;
    cin>>wage;
    cout<<"Digite o �ndice da infla��o!"<<endl;
    cin>>inflation;

    inflation /=  100;

    adjustedsalary = wage + (wage *inflation);

    cout<<"Com o �ndice da infla��o em: "<<inflation<<"\nO ajuste do sal�rio fica: "<<adjustedsalary<<endl;

        
        
        
        

    return 0;  
}
  




