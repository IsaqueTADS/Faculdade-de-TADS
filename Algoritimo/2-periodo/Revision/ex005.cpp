#include<iostream>

using namespace std;

int verificdorNegativo (int valor);

int main (){

    int valor;
    cin>>valor;

    int res = verificdorNegativo (valor);

    if( res == 0 ){
        cout<<"Zero"<<endl;
    }else if (res == 1){
        cout<<"Positivo"<<endl;
    }else if (res == -1){
        cout<<"Negativo"<<endl;
    }

    return 0;
}

int verificdorNegativo  (int valor){
    if (valor == 0){
        return 0;
    }else if (valor > 0){
        return 1;
    }else {
        return -1;
    }
}