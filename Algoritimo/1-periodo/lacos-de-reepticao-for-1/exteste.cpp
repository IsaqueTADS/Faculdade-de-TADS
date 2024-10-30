#include <iostream>

using namespace std;


int main () {

    int lado,distancia;


    cout<<"Digite o lado que a casa esta "<<endl;
    cout<<"[1] Esquerdo "<<endl;
    cout<<"[2] Direito "<<endl;
    cin>>lado;

    if ( lado == 1 ){

        cout<<"Digite a distancia em relacao ao marco "<<endl;
        cin>>distancia;

        if ( distancia % 2 == 0 ){
            distancia = distancia  + 1;
            cout<<"O numero da casa sera: "<<distancia<<endl;
        }else {
            cout<<"O numero da casa sera: "<<distancia<<endl;
        }

    }else if ( lado == 2){
        cout<<"Digite a distancia em relacao ao marco "<<endl;
        cin>>distancia;

        if ( distancia % 2 == 0 ){
            cout<<"O numero da casa sera: "<<distancia;
        }else {
            distancia = distancia + 1;
            cout<<"O numero da casa sera: "<<distancia;
        }



    }else {
        cout<<"Numero invalido, digite novamente "<<endl;
    }




    return 0;
}