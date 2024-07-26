#include <iostream>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");

    char letter;

    cout<<"Digite uma letra! "<<endl;
    cin>>letter;

    switch ( letter ){

        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        cout<<letter<<" é uma vogal! "<<endl;
        break;

        default:
        cout<<letter<<" é uma consoante! "<<endl;
        break;
    }



    return 0;
}