#include <iostream>

using namespace std;


int main (){


    string nome,senha;

    cout<<"Digite seu nome "<<endl;
    cin>>nome;
    cout<<"Digite uma senha! "<<endl;
    cin>>senha;

    while ( nome == senha){
        cout<<" [ERRO] A senha nao pode ser igual ao nome\nDigite outra senha! "<<endl;
        cin>>senha;

    }

    cout<<"Nome de usuario: "<<nome<<endl;
    cout<<"Senha: "<<senha<<endl; 




    return 0;
}