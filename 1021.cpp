#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Notas e Moedas

using namespace std;

int main(){

int n;
int centavos;
int notas100, notas50, notas20, notas10, notas5, notas2, notas1;
double valor;
int moedas50, moedas25, moedas10, moedas5, moedas1;

cin >> valor;
n=valor;
centavos=(valor-n)*100;

notas100=n/100;
n=n%100;

notas50=n/50;
n=n%50;

notas20=n/20;
n=n%20;

notas10=n/10;
n=n%10;

notas5=n/5;
n=n%5;

notas2=n/2;
n=n%2;

notas1=n/1;
n=n%1;

moedas50=centavos/50;
centavos=centavos%50;

moedas25=centavos/25;
centavos=centavos%25;

moedas10=centavos/10;
centavos=centavos%10;

moedas5=centavos/5;
centavos=centavos%5;

moedas1=centavos;

cout << "NOTAS:" << endl;
cout << notas100 << " nota(s) de R$ 100.00" << endl;
cout << notas50 << " nota(s) de R$ 50.00" << endl;
cout << notas20 << " nota(s) de R$ 20.00" << endl;
cout << notas10 << " nota(s) de R$ 10.00" << endl;
cout << notas5<< " nota(s) de R$ 5.00" << endl;
cout << notas2 << " nota(s) de R$ 2.00" << endl;
cout << "MOEDAS:" << endl;
cout << notas1 << " moeda(s) de R$ 1.00" << endl;
cout << moedas50 << " moeda(s) de R$ 0.50" << endl;
cout << moedas25 << " moeda(s) de R$ 0.25" << endl;
cout << moedas10 << " moeda(s) de R$ 0.10" << endl;
cout << moedas5 << " moeda(s) de R$ 0.05" << endl;
cout << moedas1 << " moeda(s) de R$ 0.01" << endl;

return 0;
}