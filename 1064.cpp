#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Positivos e Média

using namespace std;

int main(){

int i;
int p = 0;
double soma = 0;
double media;
double x;

for(i = 1; i <= 6; i++){
    cin >> x;
    if(x > 0.0){
        p++;
        soma = soma + x;
    }
}

cout << fixed << setprecision(1);
media=soma/p;

cout << p << " valores positivos" << endl;
cout << media << endl;

    return 0;
}