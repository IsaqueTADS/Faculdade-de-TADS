#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    float diameter,heigth, width, depth;

    cout<<"Qual é o diâmetro da bola? "<<endl;
    cin>>diameter;
    cout<<"Digite a altura da caixa! "<<endl;
    cin>>heigth;
    cout<<"Digite a largura da caixa! "<<endl;
    cin>>width;
    cout<<"Digite a profundidade da caixa! "<<endl;
    cin>>depth;

    if( diameter < heigth && diameter < width && diameter < depth ){

        cout<<"A bola cabe na caixa "<<endl;

    }else if ( diameter > 0 && heigth > 0 && width > 0 && depth > 0){

        cout<<"A bola não cabe na caixa "<<endl;

    }else{

        cout<<"[ERRO] Algum valor é menor ou igual a 0, ou sej anão é possivel! ";

    }
    







    return 0;
}