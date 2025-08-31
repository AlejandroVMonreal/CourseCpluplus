#include <iostream>
using namespace std;

int main(){

    float a, b, c, d, total = 0;

    cout << "Ingrese el primer numero: "; cin >> a;
    cout << "Ingrese el segundo numero: "; cin >> b;
    cout << "Ingrese el tercer nuemero: "; cin >> c;
    cout << "Ingrese el cuarto numero: "; cin >> d;

    total = (a + b) / (c + d);

    cout.precision(2);
    cout << "El resultado es: " << total;

    return 0;
}