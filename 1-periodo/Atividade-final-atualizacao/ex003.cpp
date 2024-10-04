#include <iostream>

using namespace std;

void triplo ( int value );

int main (){

    int value = 10;

    triplo(value);


    return 0;
}

void triplo (int value){
    value = value * 3;
    cout<<value<<endl;
}