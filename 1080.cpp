#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Maior e Posição

using namespace std;

int main(){

int v, i, val, tot;
val=0;

for(i=1; i<=100; i++){
    cin >> v;
    if(v>val){
        val=v;
        tot=i;
    }
}

cout << val << endl;
cout << tot << endl;

    return 0;
}