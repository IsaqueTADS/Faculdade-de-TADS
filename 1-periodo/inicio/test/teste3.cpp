#include <iostream>
#include <string>

using namespace std;

int main(){

    string string1, string2;

    cout<<"Digite a string 1"<<endl;
    getline(cin,string1);
    cout<<"Digite a string 2"<<endl;
    cin.ignore();
    getline(cin,string2);

    int num = string1.compare(string2);
    if(num == 0){
        cout<<string1<<" = "<<string2<<endl;
    }else{
        cout<<string1<<" != "<<string2<<endl;
    }



    return 0;
}