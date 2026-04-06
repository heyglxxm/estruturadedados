#include <iostream>

using namespace std;

#define tam 20

int main(){
    int numeros[tam];

    for(int i = 0; i < tam; i++){
        cout<<"Insira o "<< i + 1 <<" numero:"<< endl;
        cin>>numeros[i];
    }

    for(int i = tam - 1; i >= 0; i--){
        cout<< numeros[i]<<endl;
    }

    return 0;
}
