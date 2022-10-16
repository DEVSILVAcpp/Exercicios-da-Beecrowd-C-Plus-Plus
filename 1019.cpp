#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Conversão de Tempo

using namespace std;

int main(){

    int s, segundorest, horas, minutos, segundos;
    cin >> s;

    horas=s/3600;
    segundorest=s%3600;
    minutos=segundorest/60;
    segundos=segundorest%60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}