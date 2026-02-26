#include <iostream>

using namespace std;

int main()
{
    float num, somaNum=0;

    cout<<"Insira um numero positivo, para parar insira um numero negativo"<<endl;
    cin>>num;

    while (num>=0){
        somaNum+=num;
        cout<<"Insira um numero positivo, para parar insira um numero negativo"<<endl;
        cin>>num;
    }

    cout<<somaNum;
    return 0;
}
