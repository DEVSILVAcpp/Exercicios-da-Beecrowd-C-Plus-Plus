#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Preenchimento de Vetor II

using namespace std;

int main(){

    int t;
    int n[1000];
    cin >> t;

    for(int i=0; i<1000; i++){
        n[i]=i%t;
    }

    for(int i=0; i<1000; i++){
        cout << "N[" << i << "] = " << n[i] << endl;
    }

return 0;
}
