#include <iostream>

using namespace std;

#define tam 10

int main(){
    float A[tam];
    float M[tam];
    float X;

    for(int i = 0; i < tam; i++){
        cout<<"Insira o " << i + 1 << " numero do vetor A:"<<endl;
        cin>>A[i];
    }

    cout << "Insira o valor de X:"<<endl;
    cin >> X;

    for(int i = 0; i < tam; i++){
        M[i] = A[i] * X;
    }

    for(int i = 0; i < tam; i++){
        cout<<M[i]<<endl;
    }

    return 0;
}
