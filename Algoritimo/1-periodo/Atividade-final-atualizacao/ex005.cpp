#include <iostream>

using namespace std;

int main (){

    int array [3] [3];

    for ( int i = 0 ; i < 3 ; i ++ ){
        for ( int j =  0 ; j < 3 ; j ++ ){
            array [i] [j] = i;
        }
    }
    for ( int i = 0 ; i < 3 ; i ++ ){
        for ( int j =  0 ; j < 3 ; j ++ ){
            cout<<array [i] [j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
