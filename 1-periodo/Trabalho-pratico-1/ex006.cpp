#include <iostream>

using namespace std;

int main () {
	
	int opc,meses;
	float inveinicial,invefinal,invemensal;
	
	cout<<"Quantos voce vai investir? "<<endl;
	cin>>inveinicial;
	
	cout<<"Por quantos meses? "<<endl;
	cin>>meses;
	
	cout<<"[1] Poupanca 3%\n[2] Fundos de renda fixa 4%\nEscolha uma opacao acima! "<<endl;
	cin>>opc;
	
	switch (opc){
		
		case 1:
			invefinal = inveinicial;
			for ( int  i = 0 ; i < meses ; i ++ ){
				
				invefinal += invefinal * 0.03;
				
			}
			invemensal = invefinal - inveinicial;
			cout<<"Apos "<<meses<<" meses de investimento seu dinheiro rendeu: "<<invemensal<<"\nTotalizando: "<<invefinal<<endl;
		
			break;	
			
		case 2:
			invefinal = inveinicial;
			for ( int  i = 0 ; i < meses ; i ++ ){
				
				invefinal += invefinal * 0.04;
				
			}
			invemensal = invefinal - inveinicial;
			cout<<"Apos "<<meses<<" meses de investimento seu dinheiro rendeu: "<<invemensal<<"\nTotalizando: "<<invefinal<<endl;
		
			break;	
		
		default:
			cout<<"Numero invalido!!";
			
			break;
			
	
	}
	
	
	
	
	return 0;
}
