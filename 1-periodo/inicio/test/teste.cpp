#include <iostream>
#include <string>

using namespace std;

int main(){

    string string1, string2, concatena;

    cout<<"Digite a string 1"<<endl;
    getline(cin,string1);
    cout<<"Digite a string 2"<<endl;
    cin.ignore();
    getline(cin,string2);

    string1 += " ";
    string1.append(string2);

    cout<<"res: "<<concatena<<endl;






    return 0;
}