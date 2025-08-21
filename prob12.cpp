#include<iostream>
using namespace std;

int main(){
    int linhas = 7;
    int colunas = 7;
    int matriz[linhas][colunas];

    cout << "Digite os elementos da Matriz: " << endl;
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            cout << "Matriz[" << i+1 << "][" << j+1 << "]:";
            cin >> matriz[i][j];
        }
    }

    cout << " Matriz inserida: " << endl;
    for (int i = 0; i < linhas; i++){
        for ( int j = 0; j < colunas; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }


return 0;
}