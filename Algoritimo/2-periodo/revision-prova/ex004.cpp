#include <iostream>


using namespace std;

int soma (int n);


int main (){

    int n = 5;

    int res = soma(n);

    cout<<res<<endl;

    return 0;
}

int soma (int n){
    if ( n == 1) return 1;
    return n + soma(n -1);
}