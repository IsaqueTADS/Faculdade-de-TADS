
#include <iostream>
using namespace std;

int somaDigitos(int number);


int main(){
	
	int number = 234;
	
	int res = somaDigitos(number);
	
	cout<<res<<endl;
	
	
	
	return 0;
}

int somaDigitos (int number){
	cout<<number<<endl;
	cout<<"mod: "<<number%10<<endl;

	if ( number < 10 )
	{
		return number;
	}

	return number%10 + somaDigitos(number/ 10);
}
