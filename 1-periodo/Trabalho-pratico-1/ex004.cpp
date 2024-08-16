#include <iostream>


using namespace std;
#define CPMF 0.0038

int main (){
	
	float deposito,saldo_atual,valorCpmf;
	int num_cheques;
	
	cout<<"Qual valor vai depositar na conta? "<<endl;
	cin>>deposito;
	cout<<"Quantos cheque voce quer emitir? "<<endl;
	cin>>num_cheques;
	
	saldo_atual= deposito;
	
	for ( int i = 0 ; i < num_cheques ; i ++ ){
		float valorCheques;
		
		cout<<"Digite o valor do cheque "<<i+1<<endl;
		cin>>valorCheques;
		
		saldo_atual -= valorCheques + (valorCheques * CPMF);			
		
	}
	
	cout<<"Seu saldo reastante e: "<<saldo_atual;
	
	
	
	
	
	
	return 0;
}
