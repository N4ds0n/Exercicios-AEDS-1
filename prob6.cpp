#include<iostream>
using namespace std;

int main(){
    int tamanho = 10;
    int valores[tamanho];
    
    cout << "Escreva os elementos do vetor: " << endl;
        for (int i = 0; i < tamanho; i++){
            cout << "Elemento" << i+1 << " : " << endl;
            cin >> valores[i];
        }

    

    if (!repeticao){
        cout << "Nenhum valor se repete " << endl;
    }
    
return 0;
}