#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Múltiplos

using namespace std;

int main(){

    int A, B, resto;
    cin >> A >> B;

    if(A > B){
        resto = A % B;
     }else{
        resto = B % A;
     }

     if(resto == 0){
        cout << "Sao Multiplos" << endl;
    }else{
        cout << "Nao sao Multiplos" << endl;
    }   

    return 0;
}