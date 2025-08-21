#include<iostream>
using namespace std;

int main(){
    int tamanho = 5;
    int vetor[tamanho];

    cout << "Escreva os elementos do vetor: " << endl;
    for ( int i=0; i < tamanho; i++){
        cout << "Elemento" << i+1 << " : " << endl; 
        cin >> vetor[i];
        }

    cout << "Valores que nao se repetem: " << endl;
    for( int i = 0; i < tamanho; i++){
        bool repetido = false;

        for(int j = 0; j < tamanho; j++){
            if(i != j && vetor[i] == vetor[j]){
                repetido = true;
                break;
            }
        }
        if(!repetido){
        cout << vetor[i] << " ";
        }
    }
    
    return 0;
}