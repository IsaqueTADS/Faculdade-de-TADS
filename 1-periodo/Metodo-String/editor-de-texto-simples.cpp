#include <iostream>
#include <string>

using namespace std;

int main (){

    string text1 = "",text2;
    int opc;
    int start,end;
    string textIse,copia;
    int numStart1 = 0;
    int comparar;

    cout<<"Digite o texto 1 "<<endl;
    getline(cin,text1);

    cout<<"O QUE DESEJA FAZER COM ESSE TEXTO? "<<endl;
    cout<<"[1] Inserir Texto "<<endl;
    cout<<"[2] Apagar texto"<<endl;
    cout<<"[3] Copiar texto "<<endl;
    cout<<"[4] Concatenar texto "<<endl;
    cout<<"[5] Comparar texto "<<endl;
    cin>>opc;

    switch(opc){
        case 1:
        

        cout<<"Digite o texto que dejesa inserir em: "<<text1<<"\nTamanho da string: "<<text1.length()<<endl;
        cin.ignore();
        getline(cin,textIse);
        cout<<"Digite o numero de onde que comecar inserir "<<endl;
        cin>>numStart1;
        text1.insert(numStart1,textIse);
        cout<<"Resultado: "<<text1<<endl;

        break;
        case 2:
        cout<<"\nTamanho da string: "<<text1.length()<<endl;
        cout<<"Digite o  intervalo que deseja apagar tipo de 0 a 1 "<<endl;
        cin>>start;
        cin>>end;
        text1.erase(start,end);
        cout<<"Resultado: "<<text1<<endl;

        break;
        case 3:
        cout<<"\nTamanho da string: "<<text1.length()<<endl;
        cout<<"Digite o  intervalo que copiar apagar tipo de 0 a 1 "<<endl;
        cin>>start;
        cin>>end;
        copia = text1.substr(start,end);

        cout<<"Original "<<text1<<endl;
        cout<<"Resultado "<<copia<<endl;

        break;
        case 4:
        cout<<"Digite o texto que deseja concatenar "<<endl;
        cin.ignore();
        getline(cin,text2);
        text1 += " ";
        text1.append(text2);
        
        cout<<"Resultado: "<<text1<<endl;

        break;
        case 5:
        cout<<"Digite o texto que queira comoarar com o 1 "<<endl;
        cin.ignore();
        getline(cin,text2);

        comparar = text1.compare(text2);

        if (comparar == 0 ){
            cout<<"Iguais"<<endl;
            cout<<text1<<" = "<<text2<<endl;
        }else{
            cout<<"Diferentes"<<endl;
            cout<<text1<<" != "<<text2<<endl;
        }
        break;
        default:
        cout<<"[ERRO]"<<endl;
        break;
    }



    return 0;
}