#include <iostream>

using namespace std;

template<class T>
class Lista{
public:
    int tamanho;
    struct Node{
        T content;
        Node* proximo;
        Node* anterior;
    };
    Lista():head(nullptr),tail(nullptr),tamanho(0){

    }
    Node* head; Node *tail;

    void inserir(T valor) {
            Node* novo = new Node{valor, nullptr, tail};

            if (tamanho == 0) {
                head = tail = novo;
            } else {
                tail->proximo = novo;
                tail = novo;
            }

            tamanho++;
        }

        void mostrar() {
            cout<<"Lista ordenada"<<endl;
            for (Node* it = head; it != nullptr; it = it->proximo) {
                cout<<it->content<<" ";
            }
            cout<<" "<<endl;
        }
        void mostrarInverso() {
            cout<<"Lista reversa"<<endl;
            for (Node* it = tail; it != nullptr; it = it->anterior) {
                cout<<it->content<<" ";
            }
            cout<<" "<<endl;
        }

};

int main(){
    Lista<string> listaFuncionarios;

    int qnt=0;
    cout<<"Quantos funcionarios gostaria de cadastrar?"<<endl;
    cin>>qnt;

    if (qnt==0 ){
        cout<<"Lista vazia"<<endl;
    }

    for (int i=0;i<qnt;i++){
        string nomeFunc;
        cout<<"Insira o nome do "<<i+1<<"º funcionario"<<endl;
        cin>>nomeFunc;
        listaFuncionarios.inserir(nomeFunc);
    }

    listaFuncionarios.mostrar();
    listaFuncionarios.mostrarInverso();
    cout<<"A quantia de funcionario é: "<<qnt<<endl;


}
