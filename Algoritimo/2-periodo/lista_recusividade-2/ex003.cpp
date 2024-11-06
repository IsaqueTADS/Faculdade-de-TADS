#include<iostream>

using  namespace std;

int maiorArray( int array[], int index);

int main (){

    int array [] = {111,30,2,4,99,1,2,3,8,6};
    int index = sizeof(array) / sizeof(array[0]);

    int maior = maiorArray(array, index);

    cout<<maior<<endl;
 

    return 0;
}



int maiorArray( int array[], int index){

  int maior = -1;

  cout<<index<<endl;
  maiorArray(array, index -1);
  if ( index == 0 ){
    return 0;
  }
  if (array[index -1] > maior){
    maior = array[index];
    return maior;
  }
 
}