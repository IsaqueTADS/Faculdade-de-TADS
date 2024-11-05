#include<iostream>

using namespace std;

double somaArray (double array[], int index);

int main (){

    double array[] = {1,1.6,4,10,9,55,33,2,90.1};
    int index = sizeof(array) / sizeof(array[0]);
    // cout<<index<<endl;

    double resposta = somaArray(array,index);
    cout<<resposta<<endl;

    return 0;
}

double somaArray(double array[], int index){
    if ( index == 0 ){
        return 0;
    }
    // cout<<index<<endl;
    // cout<<index -1<< "\t"<<endl;
    return array[index -1] + somaArray(array, index -1);

}