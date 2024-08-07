#include <iostream>

using namespace std;

int main(){
	
	int idade;
	float peso;
	
	cout<<"Digite a sua idade! "<<endl;
	cin>>idade;
	cout<<"Digite o seu peso! "<<endl;
	cin>>peso;
	
	
	if ( idade > 0 && peso > 0){
		
		if (idade < 20 ){
			
			if ( peso < 60 ){
				cout<<"Grupo 9 "<<endl;
			}else if ( peso >= 60 && peso <=90 ){
				cout<<"Grupo 8 "<<endl;
			}else if ( peso > 90){
				cout<<"Grupo 7 "<<endl;
			}
				
		}else if ( idade >= 20 && idade <= 50 ){
			if ( peso < 60 ){
				cout<<"Grupo 6 "<<endl;
			}else if ( peso >= 60 && peso <= 90){
				cout<<"Grupo 5 "<<endl;
			}else if ( peso > 90){
				cout<<"Grupo 4 "<<endl;
			}
		}else if ( idade > 50 ){
			if ( peso < 60 ){
				cout<<"Grupo 3 "<<endl;
			}else if ( peso >= 60 && peso <= 90){
				cout<<"Grupo 2 "<<endl;
			}else if ( peso > 90 ){
				cout<<"Grupo 1 "<<endl;
			}
		}	
			
	}else {
		cout<<"Idade ou peso inválido! "<<endl;
	}
	
	
	
	
	
	
	return 0;
}
