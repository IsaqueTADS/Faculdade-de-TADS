#include<iostream>

using namespace std;

int contaDigitos (int number, int cont = 1);

int main (){

   int number = 45689;
   
   int res = contaDigitos(number);
   
   cout << "soma digitos: "<< res << endl;



  return 0;
}

int contaDigitos(int number, int cont) {


if ( number < 10 ){
// cout << cont << endl;
// cout << number << endl;
int resD = cont;
 return resD;
}

// cout << number << endl;

return contaDigitos(number/10, cont + 1);

}