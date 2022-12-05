#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Resto da Divisão

using namespace std;

int main(){

    int x;
    int y;

    cin >> x >> y;

    if(x>y){
        for(int i=y+1; i<x; i++){
            if(i % 5 == 2 || i % 5 == 3){
                cout << i << endl;
            }
        }
    }

    else{
        for(int i=x+1; i<y; i++){
            if(i % 5 == 2 || i % 5 == 3){
                cout << i << endl;
            }
        }
    }

return 0;
}
