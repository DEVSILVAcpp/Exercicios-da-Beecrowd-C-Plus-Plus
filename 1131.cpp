#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Grenais

using namespace std;

int main(){

    int x, y;
    int z;
    int grenais=0;
    int Inter=0;
    int Gremio=0;
    int Empates=0;

    while(true){
        cin >> x >> y;

        if(x > y)Inter++;
        if(x < y)Gremio++;
        if(x==y)Empates++;
        grenais++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> z;

        if(z==2)break;
        }

        cout <<  grenais << " grenais" << endl;
        cout << "Inter:" << Inter << endl;
        cout << "Gremio:" << Gremio << endl;
        cout << "Empates:" << Empates << endl;

        if(Inter > Gremio)cout << "Inter venceu mais" << endl;
        if(Inter < Gremio)cout << "Gremio venceu mais" << endl;
        if(Inter == Gremio)cout << "Nao houve vencedor" << endl;

return 0;
}
