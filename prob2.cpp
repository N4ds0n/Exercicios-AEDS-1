#include<iostream>
using namespace std;

int main(){
    int vet[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int posicao;

    cout << "Digite a posicao do numero desejado: " << endl;
    cin >> posicao;
        
        if (vet[posicao] % 2 == 0){
            cout << "O numero na posicao " << posicao << " e par" <<  endl;
        } else {
            cout << "o numero na posicao " << posicao << " e impar" << endl;
            
        }
return 0;
}