#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Lanche

using namespace std;

int main(){

int id, q;
double preco;
cin >> id >> q;

if(id == 1){
    preco=4.00;
}

if(id == 2){
    preco=4.50;
}

if(id == 3){
    preco=5.00;
}

if(id == 4){
    preco=2.00;
}

if(id == 5){
    preco=1.50;
}

cout << fixed << setprecision(2);
cout << "Total: R$ " << preco*q << endl;

    return 0;
}