#include<iostream>
using namespace std;

int main(){
        float nota1, nota2, m;
        char resposta;
     resposta = 's';
    
    while(resposta == 's' || resposta == 'S'){
        cout << "Digite a 1a nota: " << endl;
        cin >> nota1;
        cout << "DIgite a 2a nota: " << endl;
        cin >> nota2;

        m = (nota1+nota2)/2;
        
        cout << "A media vale: " << m << endl;
        cout << "Deseja continuar? " << endl;
        cin >> resposta;
    }

return 0;
}