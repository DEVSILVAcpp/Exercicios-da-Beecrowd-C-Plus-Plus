#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Média 1

using namespace std;

int main(){

    double A, B, MEDIA;
    cin >> A;
    cin >> B;
    MEDIA = (A * 3.5 + B * 7.5)/11.0;
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << MEDIA << endl;

    return 0;
}