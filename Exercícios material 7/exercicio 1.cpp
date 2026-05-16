#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> lista;

    for (int i=0;i<5;i++){
        int num=0;
        cout<<"Insira o "<<i+1<<"º numero da lista"<<endl;
        cin>>num;
        lista.push_back(num);
    }
    cout<<"Lista ordem crescente"<<endl;
    for (list<int>::iterator it = lista.begin();it!=lista.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\nLista ordem decrescente"<<endl;
    for (list<int>::iterator it = lista.end();it!=lista.begin();){
        it--;
        cout<<*it<<" ";
    }
}
