#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Insira um numero positivo para contagem regressiva"<<endl;
    cin>>num;

    for (int i = num; i >= 0; i--) {
        cout << i << endl;
    }
    return 0;
}
