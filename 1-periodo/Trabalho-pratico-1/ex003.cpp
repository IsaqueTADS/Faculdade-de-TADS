#include <iostream>

using namespace std;

int main (){
	
	float pes,polega,jardas,milhas;
	
	cout<<"Digite o valor em pes "<<endl;
	cin>>pes;
	
	polega = pes * 12;
	jardas = pes / 3;
	milhas = pes / (1760 * 3);
	
	cout<<pes<< " para pelegadas sao:  "<<polega<<endl;
	cout<<pes<< " para jardas sao:  "<<jardas<<endl;
	cout<<pes<< " para milhas sao:  "<<milhas<<endl;
	
	return 0;
}
