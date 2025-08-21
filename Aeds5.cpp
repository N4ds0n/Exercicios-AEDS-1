#include<iostream>
using namespace std;

int main(){
    
        float ladomaior, ladomenor, perimetro, area;
    cout << "Entre com a medida do maior lado em cm" << endl;
    cin >> ladomaior;
    cout << "Entre com a medida do lado menor em cm" << endl;
    cin >> ladomenor;
    
    perimetro = 2*ladomaior + 2*ladomenor;
    area = ladomaior*ladomenor;

    cout << "O perimetro do retangulo e:" << perimetro << endl;
    cout << "A area do retangulo e:" << area << endl;


return 0;
}