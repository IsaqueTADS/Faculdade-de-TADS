#include<iostream>
#include<locale.h>

using namespace std;

int main (){
    
    setlocale(LC_ALL,"portuguese");
    float valuepurchase, valuemoney, change;
     cout<<"Digite o valor da compra! "<<endl;
     cin>>valuepurchase;
     cout<<"Quanto de dinheiro voc� entregou no caixa? "<<endl;
     cin>>valuemoney;
    change = valuepurchase - valuemoney;

    if( valuepurchase <= valuemoney){


        if ( valuepurchase - valuemoney != 0){

        cout<<"O valor do troco �: "<<change;



        
        }else{
        cout<<"SEM TROCO IRM�O";
        }
        
    }else{
        cout<<"Dinheiro insuficiente para pagar a conta! "<<endl;
    }
        
        

    return 0;  
}
  




