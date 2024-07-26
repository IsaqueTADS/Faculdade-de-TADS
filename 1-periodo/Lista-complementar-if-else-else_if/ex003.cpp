#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    float diameter,height, width, depth;

    cout<<"Qual é o diâmetro da bola? "<<endl;
    cin>>diameter;
    cout<<"Digite a altura da caixa! "<<endl;
    cin>>height;
    cout<<"Digite a largura da caixa! "<<endl;
    cin>>width;
    cout<<"Digite a profundidade da caixa! "<<endl;
    cin>>depth;
    
    if ( diameter > 0 && height > 0 && width > 0 && depth > 0){
        if( diameter <= height && diameter <= width && diameter <= depth ){
            cout<<"A bola cabe na caixa "<<endl;
        }else{
            cout<<"A bola não cabe na caixa "<<endl;
        }
    }else {
        cout<<"[ERRO] Algum valor é menor ou igual a 0, ou seja, não é possivel! ";
    }

    return 0;
}