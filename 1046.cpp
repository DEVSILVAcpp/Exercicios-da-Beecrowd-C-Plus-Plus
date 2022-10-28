#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Tempo de Jogo

using namespace std;

int main(){

    int in, fi;
    int tempo;
    cin >> in >> fi;

    if(fi <= in)fi +=24;
        cout << "O JOGO DUROU " << fi - in << " HORA(S)" << endl;
    

    return 0;
}