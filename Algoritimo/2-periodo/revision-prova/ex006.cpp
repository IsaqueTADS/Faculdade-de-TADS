#include <iostream>

using namespace std;

int main (){
    int v1 = 40, v2 = 10;
    int* p1 = &v1, *p2= &v2;
    int aux = *p1;

    cout<<*p1 + *p2<<endl;

    cout<<"*p1: "<<*p1 <<endl;
    cout<<"*p2: "<<*p2 <<endl;

    *p1 = *p2;
    *p2 = aux;

    cout<<"*p1: "<<*p1 <<endl;
    cout<<"*p2: "<<*p2 <<endl;

    return 0;
}