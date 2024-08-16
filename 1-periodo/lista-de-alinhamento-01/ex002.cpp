#include<iostream>
#include<locale.h>

using namespace std;

#define DESCONTO 0.47

int main (){
    
    setlocale(LC_ALL,"portuguese");
    
    float value, discount;

    cout<<"Qual o valor do livro? "<<endl;
    cin>>value;

    discount = value - ( DESCONTO * value);

    cout<<"O livro com desconto, sai por: "<<discount<<endl;


        
        
        

    return 0;  
}
  




