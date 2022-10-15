#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Cédulas

using namespace std;

int main(){

   int n;
   cin >> n;
   cout << n << endl;
   cout << n/100 << " nota(s) de R$ 100,00" << endl;
   n%=100;
   cout << n/50 << " nota(s) de R$ 50,00" << endl;
   n%=50;
   cout << n/20 << " nota(s) de R$ 20,00" << endl;
   n%=20;
   cout << n/10 << " nota(s) de R$ 10,00" << endl;
   n%=10;
   cout << n/5 << " nota(s) de R$ 5,00" << endl;
   n%=5;
   cout << n/2 << " nota(s) de R$ 2,00" << endl;
   n%=2;
   cout << n/1 << " nota(s) de R$ 1,00" << endl;
   n%=1;

    return 0;
}