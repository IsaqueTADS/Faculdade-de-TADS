#include<iostream>

using namespace std;


int main (){

    int n = 5;

    int n2 = 10;

    int* pN = &n;

    int* pN2 = &n2;

    cout<<n<<endl;
    cout<<n2<<endl;

    *pN = -3;
    *pN2 = 6;

    cout<<n<<endl;
    cout<<n2<<endl;

   

    return 0;
}