#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL,"pt_BR.UTF-8");
    int n=0;
    int num=0;
    int par=0, impar=0;
    int pos=0, neg=0, zer=0;
    int mult3=0, mult5=0, multA=0;
    int maiorN=0, menorN=0;
    int mediaP=0, mediaI=0;

    do {
        cout<<"Digite o valor de N: "<<endl;
        cin>>n;
    } while (n<10);

    for (int i =0; i<n;i++){
        cout<<"Insira o valor "<<i+1<<" da sequencia"<<endl;
        cin>>num;
        //Par e impar
        if(num%2==0){
            par++;
            mediaP+=num;
        }
        else{
            impar++;
            mediaI+=num;
        }
        //Positivo, negativo, zero
        if (num==0){
            zer++;
        }
        else if(num>0){
            pos++;
        }
        else{
            neg++;
        }
        //Multiplo 3, 5 ou ambos
        if (num%3==0){
            mult3++;
        }
        else if(num%5==0){
            mult5++;
        }
        else if (num%3==0&&num%5==0){
            multA++;
        }
        //Maior e menor numero
        if (i==0){
            maiorN=num;
            menorN=num;
        }
        if (maiorN<num){
            maiorN=num;
        }
        if (menorN>num){
            menorN=num;
        }
    }

    cout<<"Quantidade de números pares e ímpares"<<endl;
    cout<<"Par:"<< par<<" \tImpar: "<<impar<<endl;
    cout<<"________________________________________________"<<endl;
    cout<<"Quantidade de positivos, negativos e zeros"<<endl;
    cout<<"Positivos: "<<pos<< "\tNegativos: " <<neg<<"\t Zeros: " << zer<<endl;
    cout<<"________________________________________________"<<endl;
    cout<<"Quantidade de múltiplos de 3"<<endl;
    cout<<mult3<<endl;
    cout<<"Quantidade de múltiplos de 5"<<endl;
    cout<<mult5<<endl;
    cout<<"Quantidade de números que são múltiplos de ambos"<<endl;
    cout<<multA<<endl;
    cout<<"________________________________________________"<<endl;
    cout<<"Maior número digitado"<<endl;
    cout<<maiorN<<endl;
    cout<<"Menor número digitado"<<endl;
    cout<<menorN<<endl;
    cout<<"________________________________________________"<<endl;
    cout<<"Média dos números pares"<<endl;
    cout<<mediaP/par<<endl;
    cout<<"Média dos números ímpares"<<endl;
    cout<<mediaI/impar<<endl;
}
