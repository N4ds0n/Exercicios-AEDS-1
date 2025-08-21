#include<iostream>
using namespace std;

int main (){

    float nota1, nota2, m;

    cout << "Entre com o valor da 1a nota:" << endl;
    cin >> nota1;
    cout << "Entre com o valor da 2a nota:" << endl;
    cin >> nota2;
    m = (nota1+nota2)/2;

    if (m>=60) cout <<"Aluno aprovado!" << endl;
    else cout << "Aluno reprovado." << endl;

     return 0;
}