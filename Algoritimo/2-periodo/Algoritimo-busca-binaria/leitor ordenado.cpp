#include<iostream>

using namespace std;

int main (){
	
	int vetor []= {9,10,20,30,40,50,60,70,80,90,100};
	
	int tamanho = sizeof(vetor) / sizeof(vetor[0]);

	cout<<"test: "<<tamanho<<endl;
	
	int meio;
	
	int direita = tamanho - 1;
	
	int esquerda = tamanho - tamanho;
	
	int procurar = 300;
	
    bool achouu = false;

	int achouValue = 0;

	int cont = 0;
    
    
    while (cont <= tamanho){
    	
    	meio =  (esquerda + direita) / 2;

		cont++;
	
		
		if(procurar == vetor[meio]){
			
			achouu = true;
			achouValue = vetor[meio];

			break;
		}
		
		if(procurar == vetor[esquerda]){
			
			achouu = true;
			achouValue = vetor[esquerda];

			
			break;
		
		}

		if(procurar == vetor[direita]){
			
			achouu = true;
			achouValue = vetor[direita];

			
			break;
		
		}
		
		if ( procurar > vetor[meio]){
			esquerda = meio + 1;
		}
		
		if (procurar < vetor[meio]){
			direita = meio - 1;
		}
			
	}
	 
	
	cout<<"cont: "<<cont<<endl; 
	
		
	if(achouu == true){
		cout<<"achou"<<endl;;
		cout<<achouValue<<endl;
	}
		
		
	if(!achouu){
		cout<<"Numero: "<<procurar<<" não econtrado"<<endl;
	}

	
	
	return 0;
}
