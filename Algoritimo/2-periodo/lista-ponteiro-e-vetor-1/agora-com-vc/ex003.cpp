#include<iostream>


using namespace std;


int main (){


    int vetor[4];


    int* v = vetor;


    for (int i = 0; i  < 4; i++) cin>> *(v + i);
    for (int i = 0; i  < 4; i++) cout<< *(v + i) * 4<<endl;;


    return 0;
}
