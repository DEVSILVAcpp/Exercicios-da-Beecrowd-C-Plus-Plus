#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Resto 2

using namespace std;

int main(){

    int i, n;
    cin >> n;

    for(i=1; i<=10000; i++){
        if(i%n==2){
            cout << i << endl;
        }
    }

    return 0;
}