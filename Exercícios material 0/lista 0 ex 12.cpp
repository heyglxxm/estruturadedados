#include <iostream>

using namespace std;

int main()
{
    int num;
    int numMaior=0;

    for (int i=0; i<3;i++){
    cout<<"Insira um numero para verificar qual o maiorr:"<<endl;
    cin>>num;

    if (num>numMaior){
        numMaior = num;
    }
    }
    cout<<numMaior<<endl;

    return 0;
}
