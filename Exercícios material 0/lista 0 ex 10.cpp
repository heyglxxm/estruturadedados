#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int idade, opiniao;
    int totalPessoas = 0, contOtimo = 0, contBom = 0, contRegular = 0, contRuim = 0;
    float somaIdades = 0;

    cout << "Digite a idade (negativa para sair): ";
    cin >> idade;

    while (idade >= 0) {
        cout << "Digite a opiniao (1-Otimo, 2-Bom, 3-Regular, 4-Ruim): ";
        cin >> opiniao;

        totalPessoas++;
        somaIdades += idade;

        if (opiniao == 1) contOtimo++;
        else if (opiniao == 2) contBom++;
        else if (opiniao == 3) contRegular++;
        else if (opiniao == 4) contRuim++;

        cout << "Digite a idade (negativa para sair): ";
        cin >> idade;
    }

    if (totalPessoas > 0) {
        cout << fixed << setprecision(2);
        cout << "\nQuantidade de pessoas: " << totalPessoas << endl;
        cout << "Media de idade: " << somaIdades / totalPessoas << endl;
        cout << "Porcentagem Otimo: " << (contOtimo * 100.0) / totalPessoas << "%" << endl;
        cout << "Porcentagem Bom: " << (contBom * 100.0) / totalPessoas << "%" << endl;
        cout << "Porcentagem Regular: " << (contRegular * 100.0) / totalPessoas << "%" << endl;
        cout << "Porcentagem Ruim: " << (contRuim * 100.0) / totalPessoas << "%" << endl;
    } else {
        cout << "Nenhum dado registrado." << endl;
    }

    return 0;
}
