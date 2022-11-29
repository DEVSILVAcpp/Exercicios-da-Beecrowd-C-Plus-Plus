#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Crescente e Decrescente

using namespace std;

int main(){

    int X;
    int Y;

    while(cin >> X >> Y){
        if(X > Y){
            cout << "Decrescente" << endl;
        }

        else if(Y > X){
            cout << "Crescente" << endl;
        }

        else if(X==Y)break;
    }

return 0;
}
