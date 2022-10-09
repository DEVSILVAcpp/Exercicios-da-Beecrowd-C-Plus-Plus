#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Área do Círculo

using namespace std;

int main(){

    double area, n= 3.14159, raio;
    cin >> raio;
    area = n * (raio * raio);
    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}