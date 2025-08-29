#include <iostream>
using namespace std;

int main(){

    const float iva = 0.16;
    float product;

    cout << "Ingrese el precio del producto: ";
    cin >> product;

    float ivaT = product * iva;
    float total = product + ivaT;
    cout << "el precio del producto mas iva es: " << total;

    return 0;
}