#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Soma de Ímpares Consecutivos II

using namespace std;

int main(){

    int n, a, b, impar = 0;
    cin >> n;

    for(int x=0; x<n; x++){
            impar = 0;
        cin >> a >> b;
        if(a > b){
            for(int x=b+1; x<a; x++){
                if(x%2 !=0){
                        impar = impar +x;
            }
        }
    }else{
        for(int x=a+1; x<b; x++){
            if(x%2 !=0){
                impar = impar +x;
            }
        }
    }
    cout << impar << endl;
}


return 0;
}
