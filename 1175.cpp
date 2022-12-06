#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Troca em Vetor I

using namespace std;

int main(){

    int N[20];
    int i;
    int temp;

    for(i=0; i<=19; i++){
        cin >> N[i];
    }

    for(i=0; i<=9; i++){
        temp = N[i];
        N[i] = N[19-i];
        N[19-i] = temp;
    }

    for(i=0; i<=19; i++){
        cout << "N[" << i << "] = " << N[i] << endl;
    }

return 0;
}
