#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Médias Ponderadas

using namespace std;

int main(){

double a, b, c, total, media;
int i, x;

cin >> x;
for(i=1; i<=x; i++){
    cin >> a >> b >> c;
    total=a*2.0+b*3.0+c*5.0;
    media=total/10;
    cout << fixed << setprecision(1) << media << endl;
}

    return 0;
}