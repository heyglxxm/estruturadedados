#include <iostream>

using namespace std;

#define tam 5

int main(){
    int vet[tam];
    int *p=vet;
    float soma=0;

    for(int i=0;i<tam;i++){
        cout<<"Insira o valor "<<i+1<<":"<<endl;
        cin>>vet[i];
    }

    for(int i=0;i<tam;i++){
        soma+=*(p+i);
    }

    cout<<"Media: "<<soma/tam<<endl;

    return 0;
}
