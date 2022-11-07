#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Pares entre Cinco Números

using namespace std;

int main(){

    int x;
    int p;
    int i;

    p = 0;
    for(i = 1; i <= 5; i++){
        cin >> x;
        if(x%2 == 0){
            p++;
        }
    }

    cout << p << " valores pares" << endl;
    
    return 0;
}