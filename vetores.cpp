#include<iostream>
using namespace std;

int main(){
    //Alocação Estática:

    //int vet[4];
    //vet[0]=5;
    //vet[1]=10;
    
    //int vet[4] = {5,10};
   

    //for(int i=0; i<4; i++){
    //    cout << vet[i] << " ";
    //}
    //cout << endl;
    
    //int x = sizeof(vet);
    //cout << x << endl;

//Alocação Dinâmica:
    int tamanho;
    cout <<"Digite o tamanho do vetor: " << endl;
    cin >> tamanho;
    int* vetor = new int[tamanho];
    
    for (int i=1; i<tamanho; i++){
        cout << "Digite o elemento " << i << "do vetor: " << endl;
        cin >> vetor[i];
    }

    for (int i=0; i<tamanho; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;




return 0;
}