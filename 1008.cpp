#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Salário

using namespace std;

int main(){

    double A, B, C, SALARY;
    cin >> A >> B >> C;
    cout << "NUMBER = " << A << endl;
    cout << fixed << setprecision(2);
    SALARY = B * C;
    cout << "SALARY = U$ " << SALARY << endl;

    return 0;
}