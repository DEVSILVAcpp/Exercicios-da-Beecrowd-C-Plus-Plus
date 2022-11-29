#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Quadrante

using namespace std;

int main(){

    int X;
    int Y;

    while(cin >> X >> Y){
        if(X > 0 && Y > 0){
            cout << "primeiro" << endl;
        }

        else if(X > 0 && Y < 0){
            cout << "quarto" << endl;
        }

        else if(X < 0 && Y < 0){
            cout << "terceiro" << endl;
        }

        else if(X < 0 && Y > 0){
            cout << "segundo" << endl;
        }

        else if(X==0)break;
        else if(Y==0)break;
    }

return 0;
}
