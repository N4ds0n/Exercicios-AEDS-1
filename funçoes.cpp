#include<iostream>
using namespace std;

//constante
#define pi 3.14;

void inscrever(){
    cout << "Frase qualquer" << endl;

}
//
int somar(int x, int y){
    int soma;
    soma = x + y;

return soma;
}
//
int main(){
    
    inscrever();

    int a=5, b=4;
    int s;
    s = somar(a,b);
    cout << "Soma: " << s << endl;
   
return 0;
}