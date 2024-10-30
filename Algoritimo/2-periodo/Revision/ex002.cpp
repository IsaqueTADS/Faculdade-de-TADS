#include<iostream>

using namespace std;

int main (){
    
    double habitantesA = 80000;
    double habitantesB = 200000;
    int anos = 0;

    while ( habitantesA < habitantesB ){
        habitantesA = habitantesA + (habitantesA * 0.03);
        habitantesB = habitantesB + (habitantesB * 0.015);
        
        anos ++;
    }

    cout<<"Anos: "<<anos<<endl;

    return 0;
}