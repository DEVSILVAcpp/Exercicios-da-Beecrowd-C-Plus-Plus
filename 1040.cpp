#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Média 3

using namespace std;

int main(){

double N1, N2, N3, N4, media;
double N5, media2;

cin >> setprecision(1);
cin >> N1 >> N2 >> N3 >> N4;

media=((N1 * 2)+(N2 * 3)+(N3 * 4)+(N4 * 1))/10;

cout << fixed << setprecision(1);
cout << "Media: " << setprecision(1) << media << endl;

if(media >= 7.0){
    cout << "Aluno aprovado." << endl;
}

else if(media < 5.0){
    cout << "Aluno reprovado." << endl;
}

else if(media >= 5.0 && media <= 6.9){
    cout << "Aluno em exame." << endl;

    cin >> setprecision(1);
    cin >> N5;
    cout << "Nota do exame: " << setprecision(1) << N5 << endl;

    media2=(media+N5)/2;

    if(media2 >= 5.0){
        cout << "Aluno aprovado." << endl;
        cout << "Media final: " << setprecision(1) << media2 << endl;
    }
    
    else if(media2 <= 4.9){
        cout << "Aluno reprovado." << endl;
        cout << "Media final: " << setprecision(1) << media2 << endl;
    }
}

    return 0;
}