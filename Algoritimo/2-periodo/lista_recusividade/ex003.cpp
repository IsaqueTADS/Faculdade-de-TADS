#include<iostream>

using namespace std;

double mdc ( double x, double y);

int main (){
    double x = 5, y = 9;

    double resultado = mdc(x,y);

    cout<<resultado<<endl;

    return 0;
}

double mdc (double x, double y){
    if (x > y){
        return mdc (x -y, y);
    }else if (y > x){
        return mdc (y -x, x);
    }else if ( x == y ){
        return x;
    }
}