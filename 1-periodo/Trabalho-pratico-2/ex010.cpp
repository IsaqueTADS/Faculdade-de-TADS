#include <iostream>

using namespace std;

int main (){

    int cont0a25 = 0, cont26a50 = 0, cont51a75 = 0, cont76a100 = 0;
    int num = 0;
   

    while ( num >= 0 ){
        cout<<"Digite qualquer numero desde que não seja negativo! "<<endl;
        cin>>num;
        if ( num >= 0 && num <= 25 ){
            cont0a25++;
        }else if (num >= 26 && num <= 50  ){
            cont26a50++;
        }else if (num >= 51 && num <= 75){
            cont51a75++;
        }else if( num >= 76 && num <= 100 ){
            cont76a100++;
        }

    }

    cout<<"Esses são os ques estão no intervalo de [0-25]: "<<cont0a25<<endl;
    cout<<"Esses são os ques estão no intervalo de [26-50]: "<<cont26a50<<endl;
    cout<<"Esses são os ques estão no intervalo de [51-75]: "<<cont51a75<<endl;
    cout<<"Esses são os ques estão no intervalo de [76-100]: "<<cont76a100<<endl;
   


    return 0;
}