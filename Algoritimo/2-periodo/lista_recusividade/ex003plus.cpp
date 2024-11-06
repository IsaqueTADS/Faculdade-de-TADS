#include<iostream>

using namespace std;

int mdc ( int x, int y);

int main (){
    int x = 5, y = 9;

    int resultado = mdc(x,y);

    cout<<resultado<<endl;

    return 0;
}

int mdc (int x, int y){
    if( y == 0){
        return x;
    }

    cout<<"y"<<y<<endl;
    cout<<"x"<<x<<endl;

    return mdc , x % y);
}
