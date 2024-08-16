#include<iostream>
#include<locale.h>
#include<stdbool.h> // uso para system("cls")
#include<cstdlib> //uso para exit()
#include<iomanip> //uso para o fixed e setprecision()
using namespace std;

#define DAILY 25
#define RATE 0.20

int main(){
    setlocale(LC_ALL, "portuguese");

        float days, km, total_km, total_days, totalvalue;

        cout<< "Quantos dias o veiculo ficou alugado? "<<endl;
        cin>>days;
        cout<< "Quantos KM rodado? "<<endl;
        cin>>km;

        total_days = days * DAILY;
        total_km = km * RATE;

        totalvalue = days + km;

        system("cls");
        cout<< fixed << setprecision(2);
        cout<< "Na devolução você terá que pagar \nDiária: " << total_days << " Reais" <<endl;
        cout<< "Por km rodado: " << total_km << " Reais" <<endl;
        cout<< "Valor total a pagar: "<< totalvalue  <<" Reais" <<endl;
 
   return 0;

}