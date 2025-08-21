#include<iostream>
using namespace std;

int main(){
    int tamanho = 10;
    int vetor[tamanho];

    cout << "Insira os elementos do vetor: " << endl;
    for (int i = 0; i < tamanho; i++){
        cout << "Elemento" << i+1 << " : " << endl;
        cin >> vetor[i];
    }

    int x;
    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Multiplos de " << x << " no vetor e suas posicoes:" << endl;
    bool encontroumultiplo = false;

    for (int i = 0; i < tamanho; i++){
        if (vetor[i] % x == 0){
            cout << "Valor: " << vetor[i] << ", Posicao: " << i << endl;
            encontroumultiplo = true;
        }
    }

    if (!encontroumultiplo){
        cout << "Nenhum multiplo de " << x << " encontrado no vetor.\n";
    }
return 0;
}