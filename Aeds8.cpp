#include<iostream>
using namespace std;

int main(){
        float idade;
    cout << "Digite a sua idade para sabermos a sua classe eleitoral" << endl;
    cin >> idade;

    if(idade<=16){
        cout << "Nao eleitor" << endl;
    } else if(idade>=18 && idade<=65){
        cout << "Eleitor Obrigatorio" << endl;
    } else(idade>=16 && idade<=18 && idade>65);
        cout << "Eleitor Facultativo" << endl;
    
return 0;
}