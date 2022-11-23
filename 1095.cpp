#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Sequencia IJ 1

using namespace std;

int main(){

    int i;
    int j;
    i=1;
    j=60;
    while(j>=0){
        cout << "I=" << i;
        cout << " J=" << j << endl;
        j=j-5;
        i=i+3;
    }

return 0;
}
