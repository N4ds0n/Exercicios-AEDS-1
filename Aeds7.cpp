#include<iostream>
using namespace std;

    int main(){
        
        int num;
    cout << "Digite um numero" << endl;
    cin >> num;

    if (num % 10 == 0){
        cout << "O numero e divisivel por 10" << endl;
    } else if (num % 7 == 0){
        cout << "O numero e divisivel por 7" << endl;
    } else if (num % 5 == 0){
        cout << "O numero e divisivel por 5" << endl;
    } else {
        cout << "O numero nao e divisivel por 10, 7 e 5";
    }
   
return 0;
}