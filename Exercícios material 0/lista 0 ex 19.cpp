#include <iostream>

using namespace std;

int main()
{
    float nota, somaNotas = 0;
    int contadorAlunos = 0;

    cout << "Digite a nota do aluno (0 a 10) ou um valor negativo para sair: ";
    cin >> nota;

    while (nota >= 0) {
        somaNotas += nota;
        contadorAlunos++;

        cout << "Digite a proxima nota: ";
        cin >> nota;
    }

    if (contadorAlunos > 0) {
        float media = somaNotas / contadorAlunos;
        cout << "\nTotal de alunos: " << contadorAlunos << endl;
        cout << "Media da turma: " << media << endl;
    } else {
        cout << "Nenhuma nota foi registrada." << endl;
    }

    return 0;
}
