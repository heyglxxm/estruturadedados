#include <iostream>

using namespace std;

#define qnt_notas 2

int main (){
    float notas [qnt_notas];
    float media=0;
    int acimaMedia=0;


    for (int i=0;i <qnt_notas;i++){
        cout<<"Insira a "<<i+1<<" nota:"<<endl;
        cin>>notas[i];
        media += notas[i];
    }

    media/=qnt_notas;
    /*
    for (int i=0;i<qnt_notas;i++){
        if (notas[i]>=media)
        acimaMedia++;
    }
    */
    for(const int& x : notas){
        if (x>=media)
        acimaMedia++;
    }

    cout<<"A media da turma e: "<<media<<endl;
    cout<<"A quantia de alunos acima da media e: "<<acimaMedia<<endl;

}
