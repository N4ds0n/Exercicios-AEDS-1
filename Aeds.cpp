#include<iostream>
using namespace std;

int main(){
    //DECLARAÇÃO DAS VARIÁVEIS
    float f, c;

    //LEITURA DOS DADOS
    cout <<"entre com o valor da temperatura em graus Farenheit:" << endl;
    cin >> f;
    c = 0.555*(f-32); //UTILIZANDO 3 CASAS DECIMAIS NO TERMO FORA DOS PARÊNTESES

    //ESCRITA DAS INFORMAÇÕES
    cout <<"Temperatura em Farenheit:" << f << endl;
    cout << "Temperatura em Celcius:" << c << endl;
    
    return 0;
}