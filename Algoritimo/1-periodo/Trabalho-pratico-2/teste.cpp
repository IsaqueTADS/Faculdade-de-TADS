
#include <iostream>
#include <string>
using namespace std;
string categoria(int idade);

int main()
{
    int idade;
    cin>>idade;
    string resultado = categoria(idade);
    cout<<"categoria : "<<resultado;
    
    
    return 0;
    
}

string categoria (int idade) {
    if (idade >=0 && idade <= 12){
        return "crianca";
    }
       if (idade >=13 && idade <= 17){
        return "Adolecente";
    }
       if (idade >=18 && idade <= 64){
        return "Adulto";
    }
       if (idade >= 65){
        return "Idoso";
    }
}