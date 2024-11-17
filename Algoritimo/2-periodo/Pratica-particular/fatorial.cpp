#include <iostream>

using namespace std;

int fatorial (int number);

int main (){

    int number = 5;
    int resposta = fatorial(number);
    cout<<resposta<<endl;

    return 0;
}

int fatorial (int number){

    if ( number == 1){
        return 1;
    }else {
        return number * fatorial(number -1);
    }
}
