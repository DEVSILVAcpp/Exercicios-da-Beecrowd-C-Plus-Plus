#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Tempo de Jogo com Minutos

using namespace std;

int main(){

    int hin, min, hfi, mfi, Duration;
    cin >> hin >> min >> hfi >> mfi;
    Duration=(hfi*60+mfi)-(hin*60+min);
    if(Duration<=0)
        Duration=Duration+(60*24);
        cout << "O JOGO DUROU "<< Duration/60 <<" HORA(S) E "<< Duration%60 <<" MINUTO(S)" << endl;
    

    return 0;
}