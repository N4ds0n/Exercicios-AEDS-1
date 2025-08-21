#include <iostream>
using namespace std;

int main() {
    const int tamanhoVetor = 10;
    int vetor[tamanhoVetor];
    
    cout << "Digite 10 numeros inteiros diferentes:" << endl;

    for (int i = 0; i < tamanhoVetor; ++i) {
        int numero;
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numero;

        // Verifica se o número já foi digitado anteriormente
        for (int j = 0; j < i; ++j) {
            if (numero == vetor[j]) {
                cout << "Numero repetido. Digite outro numero." << endl;
                --i;  // Permite ao usuário digitar novamente para a mesma posição
                break;
            }
        }

        vetor[i] = numero;
    }

    cout << "\nVetor final:" << endl;
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << vetor[i] << " ";
    }


}