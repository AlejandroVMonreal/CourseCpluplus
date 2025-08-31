#include <iostream>
using namespace std;

int main(){

    int edad;
    float altura;
    string sexo;

    cout << "Cual es tu edad ?: ";
    cin >> edad;
    cout << "Cual es tu altura ?: ";
    cin >> altura;
    cout << "Cual es su sexo? : ";
    cin >> sexo;

    cout << "Sus datos son: " << "edad: " << edad << endl << " Altura: " << altura << endl << "Sexo " << sexo;  


    return 0;
}