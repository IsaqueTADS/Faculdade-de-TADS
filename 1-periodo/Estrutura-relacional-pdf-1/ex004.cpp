#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"portuguese");

        double wage, loan;

        cout<<"Digite o valor do seu sálario bruto "<<endl;
        cin>>wage;
        cout<<"Quanto você deseja de emprestimo? " <<endl;
        cin>>loan;

        cout<<"Valor do salário: "<<wage<<endl;
        cout<<"Valor do emprestimo: "<<loan<<endl;
        cout<<"30% do salario "<<0.3 * 1000<<endl;

        double percentage = 0.3 * wage;

        if ( loan <= percentage ){

            cout<<" Empréstimo concedido ! "<<endl;

        }else {

            cout<<"Valor do emprestimo excede os 30% do seu salário\nEmprestimo negado!"<<endl;
            
        }



    return 0;
}