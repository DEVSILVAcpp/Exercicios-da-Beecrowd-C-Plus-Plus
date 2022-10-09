#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Média 2

using namespace std;

int main(){

    double A, B, C, SOMA;
    cin >> A;
    cin >> B;
    cin >> C;
    SOMA = (A * 2.0 + B * 3.0 + C * 5.0)/10;
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << SOMA << endl;

    return 0;
}