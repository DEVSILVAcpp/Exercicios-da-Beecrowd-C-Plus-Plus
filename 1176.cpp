#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Fibonacci em Vetor

using namespace std;

int main(){

    int T;
    int N;
    int i;
    unsigned long long int Fib[61];

    Fib[0]=0;
    Fib[1]=1;

    for(i=2; i<=60; i++){
        Fib[i]=Fib[i-1]+Fib[i-2];
    }

    cin >> T;
    for(i=1; i<=T; i++){
        cin >> N;
        cout << "Fib(" << N << ") = " << Fib[N] << endl;
    }

return 0;
}
