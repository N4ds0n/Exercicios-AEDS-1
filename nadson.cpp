#include<iostream>
using namespace std;
 int main(){

    float nota1, nota2, media;

    cout << "Entre com a nota do primeiro aluno: " << endl;
    cin >> nota1;
    cout << "Entre com a nota do segundo aluno: " << endl;
    cin >> nota2;

    media = (nota1 + nota2)/2;

    if(media < 60){
        cout << "Aluno foi reprovado." << endl;
    } else {
        cout << "Aluno aprovado";
    }


return 0;
 }