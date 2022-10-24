#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Coordenadas de um Ponto

using namespace std;

int main(){

    double x, y;
    cin >> setprecision(1);
    cin >> x >> y;

    if(x == 0.0 && y == 0.0){
        cout << "Origem" << endl;
    }

    else if(x == 0.0){
        cout << "Eixo Y" << endl;
    }

    else if(y == 0.0){
        cout << "Eixo X" << endl;
    }

    else if(x > 0.0 && y > 0.0){
        cout << "Q1" << endl;
    }

    else if(x < 0.0 && y >0.0){
        cout << "Q2" << endl;
    }

    else if(x < 0.0 && y < 0.0){
        cout << "Q3" << endl;
    }

    else if(x > 0.0 && y < 0.0){
        cout << "Q4" << endl;
    }

    return 0;
}