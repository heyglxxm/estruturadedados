#include <iostream>

using namespace std;

int main()
{
    int opcao;

    do {
        cout << "\n--- MENU DE OPCOES ---" << endl;
        cout << "1 - Saudacao" << endl;
        cout << "2 - Mensagem de Motivacao" << endl;
        cout << "3 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Ola! Seja muito bem-vindo." << endl;
                break;
            case 2:
                cout << "Continue estudando, voce esta progredindo!" << endl;
                break;
            case 3:
                cout << "Encerrando o programa..." << endl;
                break;
            default:
                cout << "Opcao invalida! Tente novamente." << endl;
                break;
        }

    } while (opcao != 3);

    return 0;
}
