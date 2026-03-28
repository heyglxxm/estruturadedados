#include <iostream>

using namespace std;

int main(){
    int idade = 0;
    bool fumante, doencaPre;
    float renda=0;
    float valorPlano =0;

    cout<<"Insira a sua idade:"<<endl;
    cin>>idade;

    cout<<"É fumante? 1 para sim e 0 para não"<<endl;
    cin>>fumante;

    cout<<"Possui doenca pre existente? 1 para sim e 0 para não"<<endl;
    cin>>doencaPre;

    cout<<"Qual sua renda mensal?"<<endl;
    cin>>renda;

    //Regra idade
    if (idade<=18){
        valorPlano+=100;
    }
    else if (idade>=19 && idade<=40){
        valorPlano+=180;
    }
    else if (idade>=41 && idade<60){
        valorPlano+=300;
    }
    else if (idade>60){
        valorPlano+=500;
    }

    //Regra doença pre existente
    if (doencaPre){
        if (idade<=40){
            valorPlano+=(valorPlano*0.3);
        }
        else if (idade>40){
            valorPlano+=(valorPlano*0.5);
        }
    }

    //Regra fumante
    if (fumante){
        if (idade<=50){
            valorPlano+=(valorPlano*0.2);
        }
        else if (idade>50){
            valorPlano+=(valorPlano*0.4);
        }
    }

    if (renda<2000){
        valorPlano-=(valorPlano*0.2);
    }
    else if (renda>=2000 && renda<5000){
        valorPlano-=(valorPlano*0.1);
    }

    cout<<"O valor do plano e: "<<valorPlano<<endl;

}
