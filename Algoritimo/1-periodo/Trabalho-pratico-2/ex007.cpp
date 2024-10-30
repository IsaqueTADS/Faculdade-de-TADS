#include <iostream>

using namespace std;

int main (){

    float massaIni = 0,massaCri = 0.5;
    int time = 0;
    cout<<"Qual a massa inicial? "<<endl;
    cin>>massaIni;
    while ( massaIni >= massaCri ){
        massaIni =  massaIni / 2;
        time = time + 50;
    }
    int horas = time / 3600;
    int minutos = ( time % 3600) / 60;
    int segundos = time % 60;
    cout<<"A massa final: "<<massaIni<<endl;
    cout<<"tempo: "<<horas<<"h "<<minutos<<"m "<<segundos<<"s "<<endl;
    

    return 0;
}