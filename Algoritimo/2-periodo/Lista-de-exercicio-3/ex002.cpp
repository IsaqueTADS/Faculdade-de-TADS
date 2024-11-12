#include <iostream>

using namespace  std;

int somaPares (int number);

int main() {

  int number = 100;
  
  int res = somaPares(number);
  
  cout << res << endl;


  return 0;
}

int somaPares( int number ) {

   if ( number == 2 ){
       cout << number << endl;
       return number;
   }
   
   
   cout << number << endl;
   return number + somaPares(number -2);
   
   


}