#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Salário com Bônus

using namespace std;

int main(){

    string NomVendedor;
    double SalFixo, TotVendas, TotMes;
    cin >> NomVendedor >> SalFixo >> TotVendas;
    TotMes= SalFixo + TotVendas * 0.15;
    cout << fixed << setprecision(2);
    cout << "TOTAL = " << TotMes << endl;

    return 0;
}