#include<iostream>
using namespace std;

int main(){
    //DECLARAÇÃO DAS VARIÁVEIS (char) é usado para atribuir valores a variáveis com letras e caracteres.
    char nome[30], endereco[30], numero[11];

    //LEITURA DOS DADOS DO USUÁRIO
    cout << "Digite o nome:" << endl;
    cin.getline (nome, 30);
    cout << "digite o endereço:" << endl;
    cin.getline (endereco, 30);
    cout << "DIgite o numero de telefone" << endl;
    cin.getline (numero, 11);

    //ESCRITA DAS INFORMAÇÕES
    cout << "Seu nome é:" << nome << endl;
    cout << "Seu endereço é" << endereco << endl;
    cout << "Seu telefone é" << numero << endl;

    return 0;
    }