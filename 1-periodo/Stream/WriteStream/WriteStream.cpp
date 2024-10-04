#include<iostream>
#include<fstream>
using namespace std;
int main (){

    //criar obeto de escrita
    ofstream objeto;
    objeto.open("dados.txt");
    if(objeto.is_open()){
        objeto<<"!"<<endl;
    }else { 
        cout<<"Nao foi aberto "<<endl;
        objeto.close();
    }

    return 0;
}