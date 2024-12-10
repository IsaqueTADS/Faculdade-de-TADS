#include <iostream>

using namespace std;

int  ex (int base, int expoente);

int main (){

    int base = 2, expoente = 1;

    int res = ex(base,expoente);

    cout<<res;



    return 0;
}

int  ex (int base, int expoente){
   
    if(expoente == 0) return 1;
    if(base == 0) return 0;

    return base * ex(base,expoente-1);
}