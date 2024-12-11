#include<iostream>

using namespace std;


int main (){

    int v[5];
    int* pv = v;

     for(int i = 0; i < 5; i ++){
        cin>>pv[i];
    }

    cout<<endl;

    for(int i = 0; i < 5; i ++){
        cout<<i<< ":"<<pv[i]<<endl;;
    }

    *(pv + 2) = 12;

    cout<<endl;

    for(int i = 0; i < 5; i ++){
        cout<<i<< ":"<<pv[i]<<endl;;
    }


    return 0;
}