#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Seis Números Ímpares

using namespace std;

int main(){

int x;
int impar;

cin >> x;

impar=0;
while(impar < 6){
    if(x%2 != 0){
        cout << x << endl;
        impar++;
    }
    x++;
}

    return 0;
}