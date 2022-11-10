#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Quadrado de Pares

using namespace std;

int main(){

    int i;
    int n;
    cin >> n;

    for(i=2; i<=n; i=i+2){
            cout << i << "^2 = " << i*i << endl;
    }

    return 0;
}