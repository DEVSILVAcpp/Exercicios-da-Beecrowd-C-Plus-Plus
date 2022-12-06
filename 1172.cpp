#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Substituição em Vetor I

using namespace std;

int main(){

    int x[10]; //x[0]... x[9];
    int i;

    for(i=0; i<10; i++){
        cin >> x[i];
        if(x[i]<=0){
            x[i]=1;
        }
    }

    for(i=0; i<10; i++){
        cout << "X[" << i << "] = " << x[i] << endl;
    }

    return 0;
}
