#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>
#define TAM 100

//Seleçao em Vetor I

using namespace std;

int main(){

    double vet[TAM];
    int i;
    cout << fixed << setprecision(1);

    for(i=0; i<TAM; i=i+1){
        cin >> vet[i];
    }

    for(i=0; i<TAM; i=i+1){
        if(vet[i]<=10){
            cout << "A[" << i << "] = " << vet[i] << endl;
        }
    }

return 0;
}
