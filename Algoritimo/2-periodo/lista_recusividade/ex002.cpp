#include<iostream>

using namespace std;

int soma(int number,int soma1=0);

int main (){

    int res = soma(20);

    cout<<res<<endl;

    return 0;
}

int soma (int number, int soma1){

    soma1 = number;

    if ( number > 1){
        return soma1 += soma(--number);
    }else {
     return 1;
    }

}

