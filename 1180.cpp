#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Menor e Posição

using namespace std;

int main(){

    int N;
    cin >> N;
    int X[N];
    int i;
    int menor, pos;

    cin >> X[0];
    menor=X[0];
    pos=0;

    for(i=1; i<N; i++){
        cin >> X[i];
        if(X[i] < menor){
            menor=X[i];
            pos=i;
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;

return 0;
}
