#include <iostream>
using namespace std;

int main(){

    int a = 10, b = 5, c = 0;

    c = a;
    a = b;
    b = c;

    cout << a << endl << b << endl << c;

    return 0;
}