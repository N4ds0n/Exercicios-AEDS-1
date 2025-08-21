#include <iostream>
using namespace std;

int main(){

    int numero, divi, contador = 0;

    cout << "Digite o numero: ";
    cin >> numero; //4

    for(int divi = 1; divi <= numero; divi++){  // 
          if(numero % divi == 0){
            contador++; // 3
          }
    }

    cout << "Numero de divisores: " << contador << endl;


    return 0;
}