#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Gasto de Combustível

using namespace std;

int main(){

    double HORAS, KM, gasto;
    cin >> HORAS >> KM;
    gasto= HORAS * KM / 12.0;
    cout << fixed << setprecision(3);
    cout << gasto << endl;

    return 0;
}