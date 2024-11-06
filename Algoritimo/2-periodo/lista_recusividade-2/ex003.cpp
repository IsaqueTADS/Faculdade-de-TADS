#include<iostream>

using  namespace std;

int menorArray( int array[], int index);

int main (){

    int array [] = {111,30,2,4,99,1,2,3,8,6,111009, -1};
    int index = sizeof(array) / sizeof(array[0]);

    int menor = menorArray(array, index);

    cout<<menor<<endl;
 

    return 0;
}



int menorArray( int array[], int index){

  if ( index == 0 ){
  cout<<index<<endl;
    return array[0];
  }

  int menor = menorArray(array, index -1);
  
  if (array[index -1] < menor){
    return array[index -1];
  
  }

  return menor;
 
}