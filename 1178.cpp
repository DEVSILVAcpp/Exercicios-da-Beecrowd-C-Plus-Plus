#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Preenchimento de Vetor III

using namespace std;

int main(){

    double X;
    double N[100];
    int i;

    cin >> X;
    N[0]=X;

    for(i=1; i<=99; i++){
        N[i]=N[i-1]/2.0;
    }

    for(i=0; i<=99; i++){
        cout << fixed << setprecision(4) << "N[" << i << "] = " << N[i] << endl;
    }

return 0;
}
