#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>
#define LI 12
#define CO 12

//Linha na Matriz

using namespace std;

int main(){

    cout << fixed << setprecision(1);
    int linha;
    char operacao;
    float m[LI][CO];
    float result=0;
    cin >> linha;
    cin >> operacao;

    for(int i=0; i<LI; i++){
        for(int j=0; j<CO; j++){
            cin >> m[i][j];
        }
    }

    if(operacao == 'S'){
        for(int i=0; i<LI; i++){
        for(int j=0; j<CO; j++){
           if(i == linha){
            result = result + m[i][j];
           }
        }
      }
   }

    if(operacao == 'M'){
        for(int i=0; i<LI; i++){
        for(int j=0; j<CO; j++){
           if(i == linha){
            result = result + m[i][j];
           }
        }
      }
      result = result / CO;
   }
   cout  << result << endl;

   return 0;
}
