#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Preenchimento de Vetor I

using namespace std;

int main(){

    int N[10], i, p1;
    cin >> p1;
    N[0]=p1;

    for(i=1; i<10; i++){
        N[i]=N[i-1]*2;
    }

    for(i=0; i<10; i++){
        cout << "N[" << i << "] = " << N[i] << endl;
    }

return 0;
}
