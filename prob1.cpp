#include<iostream>
using namespace std;

int main(){
    int vet[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x, y;

    cout << "Digite a posicao do numero x: " << endl;
    cin >> x;
    cout << "Digite a posicao do numero y: " << endl;
    cin >> y;

    int mult = vet[x] * vet[y];
    
    cout << "O resultado da multiplicao dos elementos nas posicoes " << vet[x] << " e " << vet[y] << " eh igual a: " << mult << endl;


return 0;
}