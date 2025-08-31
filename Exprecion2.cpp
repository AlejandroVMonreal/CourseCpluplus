#include <iostream>
using namespace std;

int main(){

    float a, b, c, d, e, f, total = 0;

    cout << "Ingrese a: "; cin >> a;
    cout << "Ingrese b: "; cin >> b;
    cout << "Ingrese c: "; cin >> c;
    cout << "Ingrese d: "; cin >> d;
    cout << "Ingrese e: "; cin >> e;
    cout << "Ingrese f: "; cin >> f;

    total = (a + (b / c)) / (d + (e / f));

    cout.precision(2);
    cout << "/n El resultado es: " << total;

    return 0;
}