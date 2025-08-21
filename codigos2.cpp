#include<iostream>
using namespace std;
//prototipo da função
int maximo(int, int, int);
int main(){
    int a, b, c;

    cout << "Calculo de maior dentre 3 valores" << endl;
    cout << "Entre com o valor do numero a: " << endl;
    cin >> a;
    cout << "Entre com o valor com numero b: " << endl;
    cin >> b;
    cout << "Entre com o valor do numero c: " << endl;
    cin >> c;

    cout << "O maior valor eh: " << maximo(a, b, c) << endl;

return 0;
}

int maximo(int x, int y, int z){
    int max = x;
    if(y>max) max = y;

    if(z>max) max = z;

    return max;
}