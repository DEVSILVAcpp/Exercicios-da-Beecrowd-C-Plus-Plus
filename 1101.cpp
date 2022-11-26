#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Sequência de Números e Soma

using namespace std;

int main(){

    int M, N, aux;
    int soma=0;

    while(1){
        soma=0;
        cin >> M >> N;
        if(M <=0)break;
        if(N <=0)break;


    if(M > N){
        aux=M;
        M=N;
        N=aux;
    }
    soma=0;
    for(int i=M; i <=N; i++){
        cout << i << " ";
        soma +=i;
    }

    cout << "Sum=" << soma << endl;
    }

    return 0;
}
