#include <iostream>
#include <string>
using namespace std;
struct Livro
{
    string title;
    string autor;
    int anoPubli;

    
};
struct Biblioteca
{
    string nameBi;
    string local;
    string genero;
    Livro end;

};


int main (){
    Biblioteca b;
    cout<<"Digite o nome da biblioteca" <<endl;
    getline(cin,b.nameBi);
    cin.ignore();
    cout<<"Digete a localização da biblioteca "<<endl;
    getline(cin,b.local);
    cin.ignore();
    cout<<"Digite o titulo do livro "<<endl;
    getline(cin,b.end.title);
    cin.ignore();
    cout<<"Digite o autor do livro "<<endl;
    getline(cin,b.end.autor);
    cin.ignore();
    cout<<"Digite o ano da publicaco do livro"<<endl;
    cin>>b.end.anoPubli;

    cout<<"Nome da biblioteca "<<b.nameBi<<endl;
    cout<<"Local da biblioteca "<<b.local<<endl;
    cout<<"Titulo do livro "<<b.end.title<<endl;
    cout<<"Autor do livro "<<b.end.autor<<endl;
    cout<<"Ano da publi do livro "<<b.end.anoPubli<<endl;



    return 0;
}