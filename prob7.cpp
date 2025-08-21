#include<iostream>
using namespace std;
int main(){
    int tamanho = 5;
    int vetorA[tamanho];
    int vetorB[tamanho];

    cout << "Digite os valores do vetor A:" << endl;
    for( int i = 0; i < tamanho; i++ ){
        cout << "Elemento do vetor A" << i+1 << " :" << endl;
        cin >> vetorA[i];
        }

    cout << "Digite os valores do vetor B:" << endl;
    for( int i = 0; i < tamanho; i++ ){
        cout << "Elemento do vetor A" << i+1 << " :" << endl;
        cin >> vetorB[i];
        }

    cout << "Elementos de A: " << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << vetorA[i] << endl;
    }

    cout << "Elementos de B: " << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << vetorB[i] << endl;
    }

return 0;
}