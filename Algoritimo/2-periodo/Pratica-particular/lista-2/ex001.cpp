#include<iostream>

using namespace std;

int Fibonacci ( int number );

int main(){

    int number = 10;

    int resultado = Fibonacci(number);

    cout<<resultado<<endl;
    


    return 0;
}

int Fibonacci ( int number){   
    int fib;
 
    if ( number == 1 ){
        return 1;
    } else if ( number == 2 ){
        return 1;
    }else {
       fib = Fibonacci(number - 1) +  Fibonacci(number -2);
    }

    if ( fib%2 == 0){
        return fib *2;
    }else {
        return fib +3;
    }

}