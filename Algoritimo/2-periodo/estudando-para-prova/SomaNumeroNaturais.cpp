#include<iostream>

using namespace std;

int somaNaturais (int n);

int main (){
    
    int n = 5;
    int res = somaNaturais (n);

    cout<<res<<endl;





    return 0;
}

int somaNaturais (int n){
    
    if(n == 1) return 1;

    return n + somaNaturais(n -1);

}