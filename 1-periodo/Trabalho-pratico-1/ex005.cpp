#include <iostream>

using namespace std;
int main () {
	
	float pesoRacao,gRacao,gato1,gato2;
	
	cout<<"Digite quanos Kg tem o saco de racao "<<endl;
	cin>>pesoRacao;
	cout<<"Digite a quantidade em g para gato 1 "<<endl;
	cin>>gato1;
	cout<<"Digite a quantidade em g para gato 1 "<<endl;
	cin>>gato2;
	
	gRacao = pesoRacao * 1000;
	
	gRacao -= (gato1 + gato2) * 5;
	cout<<"Apos 5 dias resta "<<gRacao<<"g"<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
