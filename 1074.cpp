#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Par ou Ímpar

using namespace std;

int main(){

int n, x, i;
cin >> n;

for(i=0; i<n; i++){
    cin >> x;
    if(x==0){
        cout << "NULL" << endl;
    }

    if(x%2 ==0 && x!=0 && x>0){
        cout << "EVEN POSITIVE" << endl;
    }

    if(x%2 ==0 && x!=0 && x<0){
        cout << "EVEN NEGATIVE" << endl;
    }

    if(x%2 !=0 && x>0){
        cout << "ODD POSITIVE" << endl;
    }

    if(x%2 !=0 && x<0){
        cout << "ODD NEGATIVE" << endl;
    }
}

    return 0;
}