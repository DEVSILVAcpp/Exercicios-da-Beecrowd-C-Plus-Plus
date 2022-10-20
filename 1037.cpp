#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Intervalo

using namespace std;

int main(){

double V;
cin >> V;

if(V >=0 && V <=25){
    cout << "Intervalo [0,25]" << endl;
}

else if(V >=25 && V <=50){
    cout << "Intervalo (25,50]" << endl;
}

else if(V >=50 && V <=75){
    cout << "Intervalo (50,75]" << endl;
}

else if(V >=75 && V <=100){
    cout << "Intervalo (75,100]" << endl;
}

else{
    cout << "Fora de intervalo" << endl;
}

    return 0;
}