#include <iostream>

using namespace std;

int main()
{
    float precoEtiqueta, precoFinal;
    int codigoCondicao;

    cout << "Insira o preco de etiqueta do produto (PE): ";
    cin >> precoEtiqueta;

    cout << "Insira o codigo da condicao de pagamento (1 a 4): ";
    cin >> codigoCondicao;

    if (codigoCondicao == 1) {
        precoFinal = precoEtiqueta - (precoEtiqueta * 0.10);
    }
    else if (codigoCondicao == 2) {
        precoFinal = precoEtiqueta - (precoEtiqueta * 0.05);
    }
    else if (codigoCondicao == 3) {
        precoFinal = precoEtiqueta;
    }
    else if (codigoCondicao == 4) {
        precoFinal = precoEtiqueta + (precoEtiqueta * 0.10);
    }
    else {
        cout << "Codigo invalido!" << endl;
        return 0;
    }

    cout << "O valor a ser pago e: R$ " << precoFinal << endl;


    return 0;

}
