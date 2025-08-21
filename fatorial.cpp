#include<iostream>
using namespace std;

int main(){
    int f, n, i;

    cout <<"Digite o valor de n: " << endl;
    cin >> n;
    f=1;

    if(n<0){
        cout << "n invalido" << endl;
    } else {
        if(n>1){
            i=2;
            do{
                f = f*i;
                i = i + 1;
            } while(i<=n);
            cout << f << endl;
        } else{
            cout << f << endl;
        }
    }
    
return 0;
}