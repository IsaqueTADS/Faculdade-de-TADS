#include <iostream>

using namespace std;

int screenNumber ( int valueNumber);

int main (){

    int number = 8;
    screenNumber(number);



    return 0;
}


int screenNumber ( int valueNumber){
    
    // int index = valueNumber;
    if ( valueNumber == 0 ){
        cout<< valueNumber<<endl;
        return 0; 
    }
    cout<< valueNumber<<endl;
    return valueNumber - screenNumber(valueNumber-1);

}