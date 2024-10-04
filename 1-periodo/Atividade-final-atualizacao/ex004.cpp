#include <iostream>

using namespace std;

void dobrador (int& value);

int main (){
    int value = 10;

    dobrador(value);
    cout<<value<<endl;

    return 0;
}

void dobrador (int& value){
    value = value* 2;
    cout<<value<<endl;;
}