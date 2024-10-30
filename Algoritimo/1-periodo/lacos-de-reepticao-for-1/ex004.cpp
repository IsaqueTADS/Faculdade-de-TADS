#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    const int ano_contrato = 1995;
    const float salario_inicial = 1000.0;
    long double salario_atual = salario_inicial;
    long double percentual_aumento = 0.015; 
    
    
    for (int ano = ano_contrato; ano <= 2024; ano++) {
        if (ano == ano_contrato) {
            cout << "Salário em " << ano << ": R$ " << fixed << setprecision(2) << salario_atual << endl;
        } else if (ano == 1996) {
            salario_atual += salario_atual * percentual_aumento;
            cout << "Salário em " << ano << ": R$ " << fixed << setprecision(2) << salario_atual << endl;
        } else if (ano >= 1997) {
            percentual_aumento *= 2;
            salario_atual += salario_atual * percentual_aumento;
            cout << "Salário em " << ano << ": R$ " << fixed << setprecision(2) << salario_atual << endl;
        }
    }

    cout << "Salário final em 2024: R$ " << fixed << setprecision(2) << salario_atual << endl;

    return 0;
}
