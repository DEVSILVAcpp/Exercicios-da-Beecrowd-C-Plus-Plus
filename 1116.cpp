#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Dividindo X por Y

using namespace std;

int main(){

    double X, Y, aux;
    int i, n;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> X >> Y;
        if(Y==0){
            cout << "divisao impossivel" << endl;
        }else{
            aux=X/Y;
            cout << fixed << setprecision(1) << aux << endl;
        }
    }

return 0;
}
