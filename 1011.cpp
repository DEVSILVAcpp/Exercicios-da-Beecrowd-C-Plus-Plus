#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Esfera

using namespace std;

int main(){

    double volume, raio, pi;
    cin >> raio;
    pi=3.14159;
    volume=(4.0 * pi *(raio * raio * raio)/3.0 );
    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;

    return 0;
}