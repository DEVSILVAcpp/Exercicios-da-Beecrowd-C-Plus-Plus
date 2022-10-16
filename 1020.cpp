#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Idade em Dias

using namespace std;

int main(){

    int d, restantedias, anos, meses, dias;
    cin >> d;

    anos=d/365;
    restantedias=d%365;
    meses=restantedias/30;
    dias=restantedias%30;

    cout << anos << " ano(s)" << endl <<  meses << " mes(es)" << endl << dias << " dia(s)" << endl;

    return 0;
}