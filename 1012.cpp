#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Área

using namespace std;

int main(){

    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO, pi;
    pi = 3.14159;
    cin >> A >> B >> C;
    cout << fixed << setprecision(3);
    TRIANGULO = A * C / 2.0;
    cout << "TRIANGULO: " << TRIANGULO << endl;
    CIRCULO = pi * (C * C);
    cout << "CIRCULO: " << CIRCULO << endl;
    TRAPEZIO =(A + B) * C / 2.0;
    cout << "TRAPEZIO: " << TRAPEZIO << endl;
    QUADRADO = B * B;
    cout << "QUADRADO: " << QUADRADO << endl;
    RETANGULO = A * B;
    cout << "RETANGULO: " << RETANGULO << endl;

    return 0;
}