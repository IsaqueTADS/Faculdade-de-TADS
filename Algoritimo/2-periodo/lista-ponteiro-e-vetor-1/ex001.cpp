#include<iostream>

using namespace std;

int main (){
    int num[3];
    int* n = num;

    for(int i = 0; i < 3; i ++) cin>>n[i];
    for(int i = 0; i < 3; i ++) cout<<n[i]<<endl;

    return 0;
}