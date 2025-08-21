#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float raiz, n;

    cout << "Calculo de raiz quadrada" << endl;
    cout << "Entre com o numero pro qual deseja calcular a raiz" << endl;
    cin >> n;

    raiz = sqrt(n); // a função sqrt() calcula a raiz quadrada.

    cout << "A raiz quadrada de " << n << " é " << raiz << endl;


return 0;
}