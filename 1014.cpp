#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Consumo

using namespace std;

int main(){

    double  X, Y, MEDIA;
    cin >> X >> Y;
    MEDIA = X / Y;
    cout << fixed << setprecision(3);
    cout << MEDIA << " km/l" << endl;

    return 0;
}