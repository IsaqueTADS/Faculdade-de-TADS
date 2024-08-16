#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

    float productvalue, caculate;
    int option;

    cout<<"Digite o preço de etiqueta do produto! "<<endl;
    cin>>productvalue;
    cout<<"COMO DESEJA PAGAR? "<<endl;
    cout<<"[1] A vista em dinheiro ou cheque: 10% de desconto! "<<endl;
    cout<<"[2] A vista no cartão de crédito: 15% de desconto! "<<endl;
    cout<<"[3] Em duas vezes, preço normal: Sem juros!"<<endl;
    cout<<"[4] Em três vezes, preço normal: Juros de 10%!"<<endl;
    cin>>option;

    switch( option ){

        case 1:

        caculate = productvalue - ( 0.10 * productvalue);

        cout<<"O preço do produto com 10% de descoto é: "<<caculate<<endl;

        break;

        case 2:

        caculate = productvalue - (0.15 * productvalue);

        cout<<"O preço do produto com 15% de descoto é: "<<caculate<<endl;

        break;

        case 3:

        cout<<"O preço fica normal: "<<productvalue<<endl;

        break;

        case 4:

        caculate = productvalue + (0.10 * productvalue);

        cout<<"O valor do produto com 10% de juros fica: "<<caculate<<endl;
        
        break;






    }






    return 0;
}