#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Distância Entre Dois Pontos

using namespace std;

int main(){

    double x1,x2,y1,y2,Distancia;
    cin >> x1 >> y1 >> x2 >> y2;
    Distancia =(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    cout << fixed << setprecision(4);
    cout << sqrt(Distancia) << endl;

    return 0;
}