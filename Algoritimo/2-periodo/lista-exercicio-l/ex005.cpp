#include<iostream>

using namespace std;


int main (){

    int n = 5;

    int* pN = &n;

    cout<<"ende n: "<<pN<<endl;
    cout<<"valor n: "<<*pN<<endl;
    cout<<"ende pN: "<<&pN<<endl;


    return 0;
}