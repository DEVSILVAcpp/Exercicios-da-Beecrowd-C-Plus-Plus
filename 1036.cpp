#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Fórmula de Bhaskara

using namespace std;

int main(){

double A, B, C, delta;
cin >> A >> B >> C;

cout << fixed << setprecision(5);
if((B*B)-4*A*C < 0 || A == 0){
    cout << "Impossivel calcular" << endl;
}else{
    cout << "R1 = " << (-B + sqrt(B * B - 4 * A * C))/(2*A) << endl;
    cout << "R2 = " << (-B - sqrt(B * B - 4 * A * C))/(2*A) << endl;
}

    return 0;
}