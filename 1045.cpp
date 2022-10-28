#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Tipos de Triângulos

using namespace std;

int main(){

double A, B, C;
double temp;
cin >> A >> B >> C;

if(A < B){
    temp=A;
    A=B;
    B=temp;
}

if(A < C){
    temp=A;
    A=C;
    C=temp;
}

if(B < C){
    temp=B;
    B=C;
    C=temp;
}

if(A>=B+C){
    cout << "NAO FORMA TRIANGULO" << endl;
}

else if(A*A == B*B+C*C){
    cout << "TRIANGULO RETANGULO" << endl;
}

else if(A*A>B*B+C*C){
    cout << "TRIANGULO OBTUSANGULO" << endl;
}

else if(A*A<B*B+C*C){
    cout << "TRIANGULO ACUTANGULO" << endl;
}

if(A==B && A==C && B==C){
    cout << "TRIANGULO EQUILATERO" << endl;
}else{
if(A==B || A==C || B==C){
    cout << "TRIANGULO ISOSCELES" << endl;
}
}

return 0;
}

