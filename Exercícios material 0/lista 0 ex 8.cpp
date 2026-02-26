#include <iostream>

using namespace std;

int main()
{
    int voto;
    int votosCand1=0, votosCand2=0, votosNull=0, votosBranco=0, totalVotos =0;

    cout << "Digite o código do voto (1, 2, 3, 4) ou 0 para encerrar: " << endl;
    cin >> voto;

    while (voto!=0){
        if (voto==1){
            votosCand1++;
        }
        else if (voto==2){
            votosCand2++;
        }
        else if (voto==3){
            votosNull++;
        }
        else if (voto==4){
            votosBranco++;
        }

        if (voto>=1 && voto<=4){
            totalVotos++;
        }
        cout << "Próximo voto (0 para sair): ";
        cin >> voto;
    }

    if (totalVotos > 0) {
        cout << "\n--- RESULTADO DA ELEICAO ---" << endl;
            // Calculando e mostrando direto no cout
        cout << "Candidato 1: " << (votosCand1 * 100.0) / totalVotos << "%" << endl;
        cout << "Candidato 2: " << (votosCand2 * 100.0) / totalVotos << "%" << endl;
        cout << "Votos Nulos: " << (votosNull * 100.0) / totalVotos << "%" << endl;
        cout << "Votos Brancos: " << (votosBranco * 100.0) / totalVotos << "%" << endl;
        } else {
        cout << "Nenhum voto foi registrado." << endl;
        }
    return 0;
}
