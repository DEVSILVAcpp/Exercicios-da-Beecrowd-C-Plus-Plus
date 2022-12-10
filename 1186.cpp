#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Abaixo da Diagonal Secundária

using namespace std;

int main(){

    double m[12][12];
    double soma=0.0;
    int i, j;
    char op[5];

    cin >> op;
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            cin >> m[i][j];
        }
    }

    for(i=1; i<=11; i++){
        for(j=11; j>11-i; j--){
            soma += m[i][j];
        }
    }

    if(op[0] == 'M'){
        soma = soma /66.0;
        cout << soma << endl;
    }

return 0;
}
