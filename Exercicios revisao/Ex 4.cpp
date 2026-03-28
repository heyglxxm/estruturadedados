#include <iostream>

using namespace std;

void Dep(){
    cout<<"Insira o valor a ser depositado:"<<endl;
    cin>>valDep;
}

enum opcoes{
    Deposito=1,
    Saque=2,
    Consulta=3,
    Relatorio_Parcial=4,
    Emcerrar=0;
};

int main(){
    float saldoInicial=1000;
    int opc=0;
    opcoes opcoesSele;
    while (true){
        do{
            cout<<"1 - Deposito"<<endl;
            cout<<"2 - Saque"<<endl;
            cout<<"3 - Consulta"<<endl;
            cout<<"4 - Relatorio_Parcial"<<endl;
            cout<<"0 - Encerrar"<<endl;
            cin>>opc;
        }while (opc<0 || opc>4);
    }
}
