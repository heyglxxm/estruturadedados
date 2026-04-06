#include <iostream>

using namespace std;

int main(){
    int n;

    cout<<"Digite o tamanho dos vetores (n):"<<endl;
    cin>>n;

    float A[n];
    float B[n];
    float soma[n];

    for(int i = 0; i < n; i++){
        cout <<"Vetor A - Insira o "<< i + 1 <<" numero:"<<endl;
        cin >>A[i];
    }

    for(int i = 0; i < n; i++){
        cout<<"Vetor B - Insira o " <<i + 1 <<" numero:"<<endl;
        cin >>B[i];
    }

    for(int i = 0; i < n; i++){
        soma[i] = A[i] + B[i];
    }

    cout<<"Vetor Soma resultante:"<<endl;
    for(int i = 0; i < n; i++) {
        cout<<soma[i]<<endl;
    }

    return 0;
}
