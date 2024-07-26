#include<iostream>
#include<locale.h>

using namespace std;

int main (){
    
    setlocale(LC_ALL,"portuguese");

        float value1, value2, sum,multiplication;

        cout<<"Digite um valor decimal! "<<endl;
        cin>>value1;
        cout<<"Digite um segundo valor decimal! "<<endl;
        cin>>value2;

        sum = value1 + value2;
        multiplication = value1 * value2;

        cout<<"Soma: "<<sum<<endl;
        cout<<"Mutiplicação: "<<multiplication<<endl;
        



            
        
        
        
        

    return 0;  
}
  




