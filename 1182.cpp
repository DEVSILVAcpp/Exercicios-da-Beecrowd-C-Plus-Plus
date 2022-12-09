#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Coluna na Matriz

using namespace std;

int main(){

    double soma=0.0, M[12][12];
    char T[2];
    int C, i, j;
    cin >> C;
    cin >> T;

    for(i=0; i<=11; i++){
        for(j=0; j<=11; j++){
            cin >>  M[i][j];
            if(j==C){
                soma += M[i][j];
            }
        }
    }

    if(T[0]=='S'){
        cout << soma << endl;
    }

    else if(T[0]=='M'){
        soma=soma/12.0;
        cout << soma << endl;
    }

return 0;
}
