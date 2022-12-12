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
            if(j>10 and j<=11 and (i==1 or i==10)){
                tot=tot+vetor[i][j];
            }
            else if(j>9 and j<=11 and (i==2 or i==9)){
                tot=tot+vetor[i][j];
            }
            else if(j>8 and j<=11 and (i==3 or i==8)){
                tot=tot+vetor[i][j];
            }
            else if(j>7 and j<=11 and (i==4 or i==7)){
                tot=tot+vetor[i][j];
            }
            else if(j>6 and j<=11 and (i==5 or i==6)){
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
