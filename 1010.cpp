#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Cálculo Simples

using namespace std;

int main(){

    double codigo1, numeropec1, valunita1, codigo2, numeropec2, valunita2, soma;
    cin >> codigo1 >> numeropec1 >> valunita1;
    cin >> codigo2 >> numeropec2 >> valunita2;
    soma = numeropec1 * valunita1 + numeropec2 * valunita2;
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << soma << endl;

    return 0;
}
