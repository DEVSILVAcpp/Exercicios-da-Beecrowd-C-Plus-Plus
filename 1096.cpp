#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Sequencia IJ 2

using namespace std;

int main(){

    int i;
    int j;

    for(i=1, j=7; i<=9; j--){
        cout << "I=" << i;
        cout << " J=" << j << endl;
        if(j==5){
            i+=2;
            j=8;
        }
    }

return 0;
}
