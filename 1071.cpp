#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>


//Soma de Impares Consecutivos I

using namespace std;

int main(){

int x, y;
int i;
int soma = 0;
cin >> x >> y;

if(x < y){
    for(i=x+1; i<y; i++){
        if(i%2 !=0)
        soma +=i;
    }
}

else if(y < x){
    for(i=y+1; i<x; i++){
        if(i%2 !=0)
        soma +=i;
    }
}

cout << soma << endl;

    return 0;
}