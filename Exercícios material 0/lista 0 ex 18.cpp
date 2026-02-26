#include <iostream>

using namespace std;

int main()
{
    int num;

    cout<<"Insira um numero para a tabuado do 1 a 10"<<endl;
    cin>>num;

    for(int i=0;i<10;i++){
        cout<<num<<" X "<<i+1<<" = "<<num*(i+1)<<endl;
    }

    return 0;
}
