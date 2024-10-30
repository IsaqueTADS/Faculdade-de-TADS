#include <iostream>

using namespace std;

int main (){
	 
	float salario;
	
	cout<<"Digite seu salário "<<endl;
	cin>>salario;
	
	salario = salario - (salario  * 0.07);
	cout<<"Salario com 7% imposto "<<salario<<endl;
	
	salario = salario + (salario * 0.05);
	cout<<"Salario final com gratificacao!! "<<salario<<endl;
	
	return 0;
}
