#include <iostream>

using namespace std;

int main()
{
    float peso, altura;
    
    cout<<"Insira seu peso:"<<endl;
    cin>>peso;
    
    cout<<"Insira sua altura:"<<endl;
    cin>>altura;
    
    if (peso/altura<20)
    cout<<"Abaixo do peso"<<endl;
    if (peso/altura>=20 && peso/altura<25)
    cout<<"Abaixo do peso"<<endl;
    if (peso/altura>=25)
    cout<<"Acima do peso"<<endl;
    
    return 0;
    
}
