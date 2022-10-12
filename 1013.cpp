#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//O Maior

using namespace std;

int main(){

    int a, b, c, MaiorAB, Maior;
    cin >> a >> b >> c;
    MaiorAB = (a + b +abs(a - b))/2;
    Maior = (MaiorAB + c +abs(MaiorAB - c))/2;
    cout << Maior << " eh o maior" << endl;

return 0;
}