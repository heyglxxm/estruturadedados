#include <iostream>
#include <queue>

using namespace std;

void insCliente(queue<string>&fila){
    string nome;
    cout<<"Insira o nome do cliente que ira entrar na fila"<<endl;
    cin.ignore();
    getline(cin,nome);
    fila.push(nome);
}

void atCliente(queue<string>&fila){
    cout<<"Cliente "<<fila.front()<<" atendido"<<endl;
    fila.pop();
}

void exFila(queue<string>fila){
    cout<<"Lista de espera"<<endl;
    for (; !fila.empty(); fila.pop()){
            std::cout << fila.front() << ' ';
        std::cout << '\n';}
}

enum Opcoes{
    inserirClientes,
    atenderClientes,
    ExibirFila,
    Encerrar,
};

int main(){
int opcoes=0;
string menu[5]={"Bem vindo ao sistema de atendimento da fila","1. Inserir cliente na fila","2, Atender proximo cliente da fila","3. Exibir fila de espera","4. Encerrar o programa"};

queue<string> fila;
string nomeCliente;

while (true){
    do{
        for (string &l:menu){
            cout<<l<<endl;
        }
        if(!(cin>>opcoes)){
        cout<<"Entrada invalida"<<endl;
        return -1;}
    }while(opcoes<1||opcoes>4);
    Opcoes opc=static_cast<Opcoes>(opcoes-1);
    switch (opc){
        case Opcoes::inserirClientes: insCliente(fila);break;
        case Opcoes::atenderClientes: atCliente(fila);break;
        case Opcoes::ExibirFila: exFila(fila);break;
        case Opcoes::Encerrar: return 0;break;
    }
}
}
