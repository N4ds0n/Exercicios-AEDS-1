#include<iostream>
using namespace std;

int main(){
    int linhas = 4;
    int colunas = 4;
    int matriz[linhas][colunas];

    cout << "Digite os valores da matriz 4x4: " << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
        cout << "Matriz[" << i + 1 << "][" << j + 1 << "]:";
        cin >> matriz[i][j];
        }
    }

    int elementos10 = 0;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(matriz[i][j] > 10){
                elementos10++;
            }
        }
    }
    
    cout << "Quantidade de elementos maiores que 10: " << elementos10 << endl;

return 0;
}