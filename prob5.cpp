#include<iostream>
using namespace std;

int main(){
    int tamanho = 10;
    int valores[tamanho];
    int somaimpar = 0;
    int produtopares = 1;
    
    cout << "Escreva os elementos do vetor: " << endl;
    for (int i = 0; i < tamanho; i++){
        cout << "Elemento" << i+1 << " : " << endl;  
        cin >> valores[i];
    }

    for (int i = 0; i < tamanho; i++){
        if (valores[i] % 2 == 0){
            produtopares *= valores[i];
        } else {
            somaimpar += valores[i];
        }
    }

    cout << "A soma dos elementos impares: " << somaimpar << endl;
    cout << "O produto dos elementos pares: " << produtopares << endl;


return 0;
}