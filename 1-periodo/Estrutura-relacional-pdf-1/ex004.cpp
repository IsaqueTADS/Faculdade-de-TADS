#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

        double wage, loan;

        cout<<"Digite o valor do seu s�lario bruto "<<endl;
        cin>>wage;
        cout<<"Quanto voc� deseja de emprestimo? " <<endl;
        cin>>loan;

        cout<<"Valor do sal�rio: "<<wage<<endl;
        cout<<"Valor do emprestimo: "<<loan<<endl;
        cout<<"30% do salario "<<0.3 * 1000<<endl;

        double percentage = 0.3 * wage;

        if ( loan <= percentage ){

            cout<<" Empr�stimo concedido ! "<<endl;

        }else {

            cout<<"Valor do emprestimo excede os 30% do seu sal�rio\nEmprestimo negado!"<<endl;
            
        }



    return 0;
}