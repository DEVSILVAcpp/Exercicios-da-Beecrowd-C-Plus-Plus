#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

//Matriz de Quadrados

using namespace std;

int main()
{

int n_matrizes, n_linhasColunas, i, j, k;
cin >> n_matrizes;
unsigned long long int array[100][100], maior[100], n_algarismos[100];

for(k=0; k<n_matrizes; k++){
    cin >> n_linhasColunas;

    for(j=0; j<100; j++){
        maior[j]=0;
        n_algarismos[j]=0;
    }

    for(i=0; i<n_linhasColunas; i++){
        for(j=0; j<n_linhasColunas; j++){
            cin >> array[i][j];
            if(array[i][j]*array[i][j]>maior[j]){
                maior[j]=array[i][j]*array[i][j];
            }
        }
    }

    for(j=0; j<n_linhasColunas; j++){
        while(maior[j] !=0){
            n_algarismos[j]=n_algarismos[j]+1;
            maior[j]=maior[j]/10;
        }
    }
    char buf[20];

    if(k>0)printf("\n");
    printf("Quadrado da matriz #%d:\n",k+4);
    for(i=0; i<n_linhasColunas; i++){
        for(j=0; j<n_linhasColunas; j++){
            if(j>0)printf(" ");
            sprintf(buf,"%%%llullu",n_algarismos[j]);
            printf(buf,array[i][j]*array[i][j]);
        }
        printf("\n");
    }
  }
}
