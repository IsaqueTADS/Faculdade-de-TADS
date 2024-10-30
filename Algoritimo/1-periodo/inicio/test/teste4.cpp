#include <iostream>
#include <string>

using namespace std;

int main (){

    string pNome,sobrenome;

    cout<<"Digite nome "<<endl;
    getline(cin,pNome);
    cout<<"Digite sobrenome "<<endl;
    getline(cin,sobrenome);

    pNome += " ";
    pNome.append(sobrenome);

    cout<<"res: "<<pNome<<endl;

    return 0;
}