#include<iostream>

using namespace std;

int dobro (int n);

int main(){
    int n = 50;

    int res = dobro(n);

    cout<<res<<endl;
    
    return 0;
}

int dobro(int n){
    return n * 2;
}