#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Intervalo 2

using namespace std;

int main(){

    int n, s, a=0, b=0, c;
    cin >> n;

    for(s=0; s<n; s++){
        cin >> c;
        if(c>=10 && c<=20)a++;
        else b++;
    }

    cout << a << " in" << endl;
    cout << b << " out" << endl;

    return 0;
}