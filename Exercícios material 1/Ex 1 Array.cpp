#include <iostream>

using namespace std;

#define qnt_nomes 10

int main(){

string nomes[qnt_nomes];
string nomeInserido;

    for (int i=0; i<qnt_nomes;i++){
    cout <<"Insira o "<<i+1<<" nome"<<endl;
    cin >>nomes[i];
    }

cout<<"Insira o nome que quer buscar"<<endl;
cin>>nomeInserido;

    for (int i=0; i<qnt_nomes;i++){
    if (nomeInserido==nomes[i])
        cout<<"Achei"<<endl;
    }
}
