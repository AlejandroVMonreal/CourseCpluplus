#include <iostream>
using namespace std;

int main(){

    float a, b, c, d, total = 0;

    cout << "Ingrese a: "; cin >> a;
    cout << "Ingrse b: "; cin >> b;
    cout << "Ingrese c: "; cin >> c;
    cout << "Ingrese d: "; cin >> d;

    total = (a + (b / (c - d)));

    cout.precision(2);
    cout << "/n El resultado es: " << total;


    return 0;
}