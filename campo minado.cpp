#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Trabalho pratico - Exercicio 1
   Integrantes do grupo: Otavio, Nadson e Joao Pedro */

int main(){

    char continuar;
    do {
        bool tabuleiro[6][6];
        unsigned seed = time(0);
        srand(seed);

        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++)
            tabuleiro[i][j] = rand() % 4 == 0;
        }

        cout << "Campo minado:\n";
        for (int i = 0; i < 6; ++i) {
            for (int j = 0; j < 6; j++)
                cout << tabuleiro[i][j] << " ";
                cout << endl;
        }

        cout << endl;

        // Linhas
        for (int i = 0; i < 6; i++) {
            bool linhaPossivel = true;
            for (int j = 0; j < 6; j++)
                if (tabuleiro[i][j]){
                    linhaPossivel = false;
                    break;
                }
                if (linhaPossivel) {
                cout << "Travessia possivel na linha " << i + 1 << endl;
                }
        }

        // Colunas
        for (int i = 0; i < 6; i++){
            bool colunaPossivel = true;
            for (int j = 0; j < 6; j++)
                if (tabuleiro[j][i]){
                    colunaPossivel = false;
                    break;
                }
                if (colunaPossivel) {
                cout << "Travessia possivel na coluna " << i + 1 << endl;
                }

            }


        // Diagonal principal
        bool diagonalPrincipalPossivel = true;
        for (int i = 0; i < 6; i++) {
            if (tabuleiro[i][i]) {
                diagonalPrincipalPossivel = false;
                break;
            }
        }
        if (diagonalPrincipalPossivel) {
            cout << "Travessia possivel na diagonal principal" << endl;
        }

        // Diagonal secundária
        bool diagonalSecundariaPossivel = true;
        for (int i = 0; i < 6; i++) {
            if (tabuleiro[i][5-i]) {
                diagonalSecundariaPossivel = false;
                break;
            }
        }
        if (diagonalSecundariaPossivel) {
            cout << "Travessia possivel na diagonal secundaria" << endl;
        }

        cout << "Deseja continuar (s/n)? ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
