#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Sequencia IJ 3

using namespace std;

int main(){

    int a, b, c, d, x;

    a=1;
    b=7;
    c=1;
    d=5;

    for(x=0; x<15; x++){
        cout << "I=" << c;
        cout << " J=" << b << endl;
        if(a%3==0){
            c=c+2;
        }
        if(b==d){
            b=b+5;
            d=d+2;
        }
        b--;
        a++;
    }

return 0;
}
