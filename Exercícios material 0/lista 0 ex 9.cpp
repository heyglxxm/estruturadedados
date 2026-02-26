#include <iostream>

using namespace std;

int main()
{
    int numAluno;
    int nMaisAlto = 0;
    int nMaisBaixo = 0;
    int altura;
    float AltMaisAlta = 0;
    float AltMaisBaixa = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Insira o numero do aluno " << i + 1 << ": ";
        cin >> numAluno;
        cout << "Insira a altura do aluno " << i + 1 << " (em cm): ";
        cin >> altura;

        if (i == 0) {
            AltMaisAlta = altura;
            nMaisAlto = numAluno;
            AltMaisBaixa = altura;
            nMaisBaixo = numAluno;
        } else {
            if (altura > AltMaisAlta) {
                AltMaisAlta = altura;
                nMaisAlto = numAluno;
            }
            if (altura < AltMaisBaixa) {
                AltMaisBaixa = altura;
                nMaisBaixo = numAluno;
            }
        }
    }

    cout << "\nAluno mais alto: Numero " << nMaisAlto << " com " << AltMaisAlta << "cm." << endl;
    cout << "Aluno mais baixo: Numero " << nMaisBaixo << " com " << AltMaisBaixa << "cm." << endl;

    return 0;
}
