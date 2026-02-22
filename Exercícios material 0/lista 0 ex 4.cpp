#include <iostream>

using namespace std;

int main()
{
    float salario, salarioNovo;
    
    cout<<"Insira seu salario:"<<endl;
    cin>>salario;
    
    if (salario<1000){
        salarioNovo=salario+(salario*0.15);
        }
    else if (salario>=1000 && salario<=1500){
        salarioNovo=salario+(salario*0.10);
    }
    else{
        salarioNovo=salario+(salario*0.05);
    }
    
    cout<<"O salario antigo era de "<<salario<<" e o novo e de "<<salarioNovo<<endl;
}
