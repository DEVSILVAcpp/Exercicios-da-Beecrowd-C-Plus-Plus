#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Números Positivos

using namespace std;

int main(){

int i;
int p;
double x;

p=0;

for(i = 1; i < 7; i = i + 1){
    cin >> x;
    if(x > 0.0)
    p = p + 1;
}

cout << p << " valores positivos" << endl;

    return 0;
}