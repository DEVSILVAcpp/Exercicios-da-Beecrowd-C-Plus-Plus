#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Pares, Ímpares, Positivos e Negativos

using namespace std;

int main(){

    int par, impar, positivo, negativo;
    int i;
    int x;

    par = impar = positivo = negativo = 0;

    i = 1;
    while(i <= 5){
        cin >> x;

        if(x%2 == 0) par++;
        if(x%2 != 0) impar++;
        if(x > 0) positivo++;
        if(x < 0) negativo++;

        i++;
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;

    return 0;
}