#include<iostream>
using namespace std;

int main(){
    int tamanho = 10;
    int vetor[tamanho];

    cout << "Escreva os elementos do vetor: " << endl;
    for (int i = 0; i < tamanho; i++){
        cout << "Elemento" << i+1 << " : " << endl;  
        cin >> vetor[i];
    }

    cout << "Valores na ordem inversa: " << endl;
    for (int i = tamanho - 1; i >= 0; i--) {
        cout << vetor[i] << " ";
    }
    
return 0;
}