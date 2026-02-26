#include <iostream>

using namespace std;

int main()
{
    float num;

    cout<<"Insira um numero dentro do intervalo de 1 a 10, para parar digite outro valor"<<endl;
    cin>>num;

    while (num>=1 && num<=10){
        cout<<"Insira um numero dentro do intervalo de 1 a 10, para parar digite outro valor"<<endl;
        cin>>num;
    }

    return 0;
}
