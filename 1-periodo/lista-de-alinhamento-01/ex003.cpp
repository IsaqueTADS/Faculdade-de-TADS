#include<iostream>
#include<locale.h>

using namespace std;

int main (){
    
    setlocale(LC_ALL,"portuguese");

    int value1, value2;

    cout<<"Digite um valor intetiro "<<endl;
    cin>>value1;
    cout<<"Digite um segundo valor inteiro "<<endl;
    cin>>value2;

    if ( value1 < value2){

        cout<<value1<<" � menor que "<<value2;

    }else{
        cout<<value2<<" � mmenor que "<<value1;
    }
        
        
        
        
    
    return 0;  
}
  




