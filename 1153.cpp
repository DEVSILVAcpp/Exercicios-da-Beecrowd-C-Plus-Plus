#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Fatorial Simples

using namespace std;

int main(){

    int fatorial = 1, N;

    cin >> N;

    for(int i=1; i<=N; i++){
        fatorial*=i;
    }

    cout << fatorial << endl;

return 0;
}
