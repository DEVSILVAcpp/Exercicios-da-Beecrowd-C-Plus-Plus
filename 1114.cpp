#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Senha Fixa

using namespace std;

int main(){

    int X;

    while(cin >> X){
        if(X==2002){
            cout << "Acesso Permitido" << endl;
        }

        else if(X !=2002){
            cout << "Senha Invalida" << endl;
        }

        if(X==2002)break;
    }

return 0;
}
