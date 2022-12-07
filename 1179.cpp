#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Preenchimento de Vetor IV

using namespace std;

int main(){

    int par[5], impar[5];
    int qp=0, qi=0;
    int x;
    int i, j;

    for(i=0; i<15; i++){
        cin >> x;
        if(x%2 == 0){
            par[qp]=x;
            qp++;
            if(qp == 5){
                for(j=0; j<5; j++){
                    cout << "par[" << j << "] = " << par[j] << endl;
                    qp=0;
                }
            }
        }else{
            impar[qi]=x;
            qi++;
            if(qi == 5){
                for(j=0; j<5; j++){
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                    qi=0;
                }
             }
         }

    }

    for(j=0; j<qi; j++){
    cout << "impar[" << j << "] = " << impar[j] << endl;
    }
     for(j=0; j<qp; j++){
    cout << "par[" << j << "] = " << par[j] << endl;
    }



return 0;
}
