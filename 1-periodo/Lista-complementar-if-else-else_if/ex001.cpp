#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

    float productvalue, caculate;
    int option;

    cout<<"Digite o pre�o de etiqueta do produto! "<<endl;
    cin>>productvalue;
    cout<<"COMO DESEJA PAGAR? "<<endl;
    cout<<"[1] A vista em dinheiro ou cheque: 10% de desconto! "<<endl;
    cout<<"[2] A vista no cart�o de cr�dito: 15% de desconto! "<<endl;
    cout<<"[3] Em duas vezes, pre�o normal: Sem juros!"<<endl;
    cout<<"[4] Em tr�s vezes, pre�o normal: Juros de 10%!"<<endl;
    cin>>option;

    switch( option ){

        case 1:

        caculate = productvalue - ( 0.10 * productvalue);

        cout<<"O pre�o do produto com 10% de descoto �: "<<caculate<<endl;

        break;

        case 2:

        caculate = productvalue - (0.15 * productvalue);

        cout<<"O pre�o do produto com 15% de descoto �: "<<caculate<<endl;

        break;

        case 3:

        cout<<"O pre�o fica normal: "<<productvalue<<endl;

        break;

        case 4:

        caculate = productvalue + (0.10 * productvalue);

        cout<<"O valor do produto com 10% de juros fica: "<<caculate<<endl;
        
        break;






    }






    return 0;
}