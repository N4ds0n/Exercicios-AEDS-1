#include<iostream>
using namespace std;

int main(){

        float num;

    cout << "Digite um numero:" << endl;
    cin >> num;

    if (num>20) cout << "o numero e maior que 20" << endl;
    else {
        if (num==20) cout << "o numero e 20" << endl;
        else cout << "o numero e menor que 20" << endl;
    }
    
return 0;
}