#include <iostream>

using namespace std;

#define tam 10

int main(){
    int vet[tam];
    int *p;

    for(int i=0;i<tam;i++){
        cout<<"Insira o valor "<<i+1<<":"<<endl;
        cin>>vet[i];
    }

    cout<<"Ordem normal:"<<endl;
    p=vet;
    for(int i=0;i<tam;i++){
        cout<<*(p+i)<<endl;
    }

    cout<<"Ordem inversa:"<<endl;
    p=&vet[tam-1];
    for(int i=0;i<tam;i++){
        cout<<*(p-i)<<endl;
    }

    return 0;
}
