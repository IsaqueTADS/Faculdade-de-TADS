#include <iostream>
#include <string>

using namespace std;

struct Pedido {
    string nameClient;
    int preco;
    int quantidade;

};

int main (){

    Pedido P1;

   cout<<"Digite o preco do pedido "<<endl;
   cin>>P1.preco;
   cout<<"Digite a quantidade do pedido "<<endl;
   cin>>P1.quantidade;
   cout<<"Digite o nome do cliente "<<endl;
   cin.ignore();
   getline(cin,P1.nameClient);


   cout<<P1.nameClient<<endl;
   cout<<P1.preco<<endl;
   cout<<P1.quantidade<<endl;






    return 0;
}