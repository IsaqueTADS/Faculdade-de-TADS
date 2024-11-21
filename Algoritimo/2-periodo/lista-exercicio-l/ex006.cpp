#include<iostream>

using namespace std;


int main (){

    int n = 5;

    int* pN = &n;

    cout<<"dobro de n: "<<*pN * 2<<endl;
   

    return 0;
}