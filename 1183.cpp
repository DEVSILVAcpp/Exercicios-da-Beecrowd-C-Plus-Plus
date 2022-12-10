#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Acima da Diagonal Principal

using namespace std;

int main(){

    double M[12][12];
    int i, j;
    char op[5];
    double soma=0.0;

    cout << fixed << setprecision(1);

    cin >> op;
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            cin >> M[i][j];
        }
    }

    for(i=0; i<12; i++){
        for(j=i+1; j<12; j++){
            soma += M[i][j];
        }
    }

    if(op[0] == 'M'){
        soma=soma /66.0;
        cout << soma << endl;
    }

return 0;
}
