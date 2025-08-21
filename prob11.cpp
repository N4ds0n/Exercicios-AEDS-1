#include<iostream>
using namespace std;

int main(){
    int linhas = 3;
    int colunas = 3;
    int matriz[linhas][colunas];

    cout << "Digite os elementos da Matriz: " << endl;
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            cout << "Matriz[" << i+1 << "][" << j+1 << "]:";
            cin >> matriz[i][j];
        }
    }

    int soma = 0;
    for (int i = 0; i < linhas; ++i) {
        for (int j = i + 1; j < colunas; ++j) {
            soma += matriz[i][j];
        }
    }

    // Exibição da matriz
    cout << "\nMatriz inserida:\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Exibição da soma
    cout << "\nA soma dos elementos acima da diagonal principal é: " << soma << endl;

    return 0;
}


