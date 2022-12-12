#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Área Superior

using namespace std;

int main(){

    double vetor[12][12], tot;
    int i, j;
    string letra;
    tot=0;

    cin >> letra;

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            cin >> vetor[i][j];
        }
    }

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            if(j>0 and j<11 and i==11){
                tot=tot+vetor[i][j];
            }
            else if(j>1 and j<10 and i==10){
                tot=tot+vetor[i][j];
            }
            else if(j>2 and j<9 and i==9){
                tot=tot+vetor[i][j];
            }
            else if(j>3 and j<8 and i==8){
                tot=tot+vetor[i][j];
            }
            else if(j>4 and j<7 and i==7){
                tot=tot+vetor[i][j];
            }
        }
    }

    if(letra == "S"){
        cout << fixed << setprecision(1) << tot << endl;
    }else{
        cout << fixed << setprecision(1) << tot/30 << endl;
    }

    return 0;
}
