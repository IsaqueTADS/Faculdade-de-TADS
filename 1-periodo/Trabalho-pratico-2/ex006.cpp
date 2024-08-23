#include <iostream>
#include <iomanip>


using namespace std;

int main (){

    float numreal = 0;
    int maxMuti = 200, maxLinha = 10;

    cout<<"Digite um numero real! "<<endl;
    cin>>numreal;

    for ( int i = 0; i < maxMuti; i ++ ){

       
        cout<< fixed <<setprecision(2) << numreal * i <<"\t";

        if ( i % maxLinha == 0 ){
            cout<<endl;
        }
    }
    
    


    return 0;
}