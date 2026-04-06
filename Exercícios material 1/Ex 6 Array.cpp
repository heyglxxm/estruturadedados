#include <iostream>

using namespace std;

#define tam 365

int main(){
    float temperaturas[tam];
    float soma=0,mediaAnual,menor,maior;
    int diasAbaixo=0;

    for(int i=0;i<tam;i++){
        cout<<"Insira a temperatura do dia "<<i+1<<":"<<endl;
        cin>>temperaturas[i];
        soma+=temperaturas[i];

        if(i==0){
            menor=temperaturas[i];
            maior=temperaturas[i];
        }else{
            if(temperaturas[i]<menor) menor=temperaturas[i];
            if(temperaturas[i]>maior) maior=temperaturas[i];
        }
    }

    mediaAnual=soma/tam;

    for(int i=0;i<tam;i++){
        if(temperaturas[i]<mediaAnual) diasAbaixo++;
    }

    cout<<"Menor temperatura: "<<menor<<endl;
    cout<<"Maior temperatura: "<<maior<<endl;
    cout<<"Media anual: "<<mediaAnual<<endl;
    cout<<"Dias abaixo da media: "<<diasAbaixo<<endl;

    return 0;
}
