#include <iostream>

using namespace std;

int main()
{
    float nota;

    cout<<"Insira sua nota:"<<endl;
    cin>>nota;

    if (nota>=6)
        cout<<"Aprovado"<<endl;
    else if (nota>4 && nota<=5.9)
        cout<<"Recuperacao"<<endl;
    else if (nota<=4)
        cout<<"Reprovado"<<endl;

    return 0;
}
