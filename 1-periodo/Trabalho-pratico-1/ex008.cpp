#include <iostream>

using namespace std;

int main () {
	
	float horaExtra=0, horaFalta=0,gratificacao=0;
	
	cout<<"Quantas hora extra voce fez ? "<<endl;
	cin>>horaExtra;
	cout<<"Quantas hora voce faltou? "<<endl;
	cin>>horaFalta;
	
	double hora = horaExtra - (0.6666666667 * horaFalta );
	
	
	if (hora > 2400  ){	
		gratificacao = 500;
	}else if ( hora >= 1800 && hora > 2400 ){
		gratificacao = 400;
	}else if ( hora >=1200 && hora <= 1800 ){
		gratificacao = 300;
	}else if ( hora >= 600 && hora < 1200){
		gratificacao = 200;
	}else if ( hora < 600 ){
		gratificacao = 100;
	}
	
	cout<<"Com "<<hora<<" seu total de gratificacao e: "<<gratificacao<<endl;
	
	
	
	
	return 0;
}
