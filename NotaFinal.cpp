#include <iostream>
using namespace std;

int main(){

    float nota1, nota2, nota3, nota4, total = 0;

    cout << "Ingresa le nota del primer alumno: "; cin >> nota1;
    cout << "/n Ingrese la nota del segundo alumno: "; cin >> nota2;
    cout << "/n Ingrese la nota del tercer alumno: "; cin >> nota3;
    cout << "/n Ingrese la nota del cuarto alumno: "; cin >> nota4;

    total = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "La nota final media entre los 4 alumnos es: " << total;

    return 0;
}