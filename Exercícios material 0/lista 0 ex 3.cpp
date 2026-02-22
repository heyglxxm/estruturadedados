#include <iostream>

using namespace std;

int main()
{
    float salarioMin, salarioBruto, salarioRec, valorHora, imposto;
    int horasTrab;
    
    cout<<"Insira seu salario minimo:"<<endl;
    cin>>salarioMin;
    
    cout<<"Insira suas horas trabalhadas:"<<endl;
    cin>>horasTrab;
    
    valorHora = salarioMin/2;
    salarioBruto = valorHora*horasTrab;
    imposto = salarioBruto*0.03;
    salarioRec = salarioBruto-imposto;
    
    cout<<"O valor do salario recebido e: "<< salarioRec<<endl;
    
}
