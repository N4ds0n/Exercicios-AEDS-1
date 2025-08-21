#include<iostream>
using namespace std;

int main(){
    int tamanho = 10;
    int vetor[tamanho];

    /*Quando os elementos do vetor não estão definidos preciso fazer este laço
    para serem inseridos os elementos do vetor de acordo o usuário do programa.  */
    cout << "Digite os 10 elementos do vetor" << endl;
    for(int i = 0; i < tamanho; i++){
        cout << "Elemento" << i+1 << " : ";
        cin >> vetor[i];
    }

    int maior = vetor[0];
    int posicaomaior = 0;
    int menor = vetor[0];
    int posicaomenor = 0;

    //Encontrando o maior e menor elemento
    for (int i = 1; i < tamanho; i++){
        if (vetor[i] > maior){
             maior = vetor[i];
             posicaomaior = i;
        }
        if (vetor[i] < menor){
            menor = vetor[i];
            posicaomenor = i;
        }
    }
     cout << "Maior elemento: " << maior << " - Posicao no vetor: " << posicaomaior << endl;
     cout << "Menor elemento: " << menor << " - Posicao no vetor: " << posicaomenor << endl;

return 0;
}