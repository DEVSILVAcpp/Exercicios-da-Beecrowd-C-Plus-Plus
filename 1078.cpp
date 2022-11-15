#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <stdlib.h>

//Tabuada

using  namespace std;

int main(){

    int i, n, x;
    cin >> n;

    for(i=1; i<=10; i++){
        x=(i*n);
        cout << i << " x " << n << " = " << x << endl;
    }

    return 0;
}