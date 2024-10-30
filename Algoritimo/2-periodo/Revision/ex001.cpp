#include <iostream>

using namespace std;

int main (){

    float salary = 0;

    cin>>salary;

    if (salary <= 280){
        salary = salary + (salary * 0.20);
        cout<<"salario  20% aumento: "<<salary<<endl;
    }else if (salary > 280 && salary < 700){
        salary = salary + (salary * 0.15);
        cout<<"salario  15% aumento: "<<salary<<endl;
    }else if (salary >= 700 && salary <= 1500){
        salary = salary + (salary * 0.1);
        cout<<"salario  15% aumento: "<<salary<<endl;
    }
    return 0;

    
}