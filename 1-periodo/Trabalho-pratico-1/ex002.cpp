#include <iostream>
#include <cmath>

using namespace std;

int main (){
	
	float  base, expoente,res;
	
	cout<<"Digite um numero para base"<<endl;
	cin>>base;
	cout<<"Digite um numero para expoente"<<endl;
	cin>>expoente;
	
	if ( base > 0 && expoente > 0){
		if ( base > 0 && expoente > 1)	{
			res = pow ( base, expoente);
		cout<<base<<" elevado a "<<expoente<<" = "<<res<<endl;
		}else if (expoente == 1 ){
		cout<<" Resultado e a base "<<base<<endl;
	    }
	}else if (expoente == 0){
		cout<<"Resultado igual a 1 "<<endl;
	}else{
		cout<<"[ERRO]"<<endl;
	}
	
	return 0;
}
