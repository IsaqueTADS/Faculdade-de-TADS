#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
    ifstream objeto ("dados.txt") ;
    string linha;
    if (objeto.is_open()){
        getline(objeto, linha);
        cout<<linha;
        objeto.close();

    }else {
        cout<<"Nao econtrado "<<endl;
    }
    return 0;
}