#include <iostream>

using namespace std;

int main(){
    int ladoA = 0;
    int ladoB = 0;
    int ladoC = 0;
    int maiorLado = 0;

    cout<<"Insira o lado A do triangulo"<<endl;
    cin>>ladoA;
    cout<<"Insira o lado B do triangulo"<<endl;
    cin>>ladoB;
    cout<<"Insira o lado C do triangulo"<<endl;
    cin>>ladoC;

    if (ladoA<ladoB+ladoC && ladoB<ladoA+ladoC && ladoC<ladoA+ladoB){
        if (ladoA==ladoB && ladoB==ladoC){
            cout<<"Triangulo equilatero"<<endl;
        }
        else if(ladoA!=ladoB && ladoA!=ladoC && ladoB!=ladoC){
            cout<<"Triangulo escaleno"<<endl;
        }
        else{
            cout<<"Triangulo isoceles"<<endl;
        }
    }
    else{
        cout<<"Não formam triangulo"<<endl;
        return -1;
    }

    if (ladoA>ladoB && ladoA>ladoC){
        maiorLado=ladoA;
        if (maiorLado*maiorLado==(ladoB*ladoB)+(ladoC*ladoC)){
            cout<<"Triangulo retangulo"<<endl;
        }
        else if (maiorLado*maiorLado>(ladoB*ladoB)+(ladoC*ladoC)){
            cout<<"Triangulo obtusangulo"<<endl;
        }
        else{
            cout<<"Triangulo acutangulo"<<endl;
        }
    }

    else if (ladoB>ladoC && ladoB>ladoA){
        maiorLado=ladoB;
        if (maiorLado*maiorLado==(ladoA*ladoA)+(ladoC*ladoC)){
            cout<<"Triangulo retangulo"<<endl;
        }
        else if (maiorLado*maiorLado>(ladoA*ladoA)+(ladoC*ladoC)){
            cout<<"Triangulo obtusangulo"<<endl;
        }
        else{
            cout<<"Triangulo acutangulo"<<endl;
        }
    }

    else if (ladoC>ladoB && ladoC>ladoA){
        maiorLado=ladoC;
        if (maiorLado*maiorLado==(ladoB*ladoB)+(ladoA*ladoA)){
            cout<<"Triangulo retangulo"<<endl;
        }
        else if (maiorLado*maiorLado>(ladoB*ladoB)+(ladoA*ladoA)){
            cout<<"Triangulo obtusangulo"<<endl;
        }
        else{
            cout<<"Triangulo acutangulo"<<endl;
        }
    }

    else {
        maiorLado=ladoC;
        if (maiorLado*maiorLado==(ladoB*ladoB)+(ladoA*ladoA)){
            cout<<"Triangulo retangulo"<<endl;
        }
        else if (maiorLado*maiorLado>(ladoB*ladoB)+(ladoA*ladoA)){
            cout<<"Triangulo obtusangulo"<<endl;
        }
        else{
            cout<<"Triangulo acutangulo"<<endl;
        }
    }
}
