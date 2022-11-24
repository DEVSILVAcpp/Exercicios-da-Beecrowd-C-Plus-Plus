#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Sequencia IJ 4

using namespace std;

int main(){

    double i, j;
    int a, b;
    for(i=0.0; i<2.1; i+=0.2){
        for(j=1.0; j<=3.0; j++){
            if(i>0 && i<1 || i>1 && i<2){
                cout << "I=" << i;
                cout << " J=" << i+j << endl;
            }else{
                a=i;
                b=i+j;
                cout << "I=" << a;
                cout << " J=" << b << endl;
            }
        }
    }

return 0;
}
