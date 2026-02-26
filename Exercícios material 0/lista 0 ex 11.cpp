#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Insira um numero para verificar se e par ou impar:"<<endl;
    cin>>num;

    if (num%2==0){
        cout<<"O numero e par"<<endl;
    }
    else if (num%2==1){
        cout<<"O numero e impar"<<endl;
    }
    return 0;
}
