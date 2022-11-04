#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Imposto de Renda

using namespace std;

int main(){

double s, tax;
cin >> s;

cout << fixed << setprecision(2);

if(s >= 00.00 && s <= 2000.00){
    cout << "Isento" << endl;
}

else if(s >= 2000.01 && s <= 3000.00){
    tax = 0.08;
    tax = (s - 2000.00)* tax;
    cout << "R$ " << tax << endl;
}

else if (s >= 3000.01 && s <= 4500.00){
    tax = 0.18;
    tax = 1000.00 * 0.08 + (s - 3000.00) * tax;
    cout << "R$ " << tax << endl;
}

else if (s > 4500.00){
    tax = 0.28;
    tax = 1000.00 * 0.08 + 1500.00 * 0.18 + (s - 4500.00) * tax;
    cout << "R$ " << tax << endl;
}

    return 0;
}