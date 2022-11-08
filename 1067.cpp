#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Números Ímpares

using namespace std;

int main(){

int x, i;
cin >> x;

for(i=0; i<x+1;i++){
    if(i%2 !=0){
        cout << i << endl;
    }
}

    return 0;
}