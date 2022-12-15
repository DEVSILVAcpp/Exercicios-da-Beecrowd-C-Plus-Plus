#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>
#define L 15
#define C 15

//Matriz Quadrada III

using namespace std;

int potencia(short int expoente)
{

    int resposta=1;

    if(expoente==0)
        return 1;

    while(expoente--)
        resposta += resposta;

    return resposta;
}

int maiorTamanho(int t)
{
    int maiorNumero=potencia(t+t-2);
    int digitos=1;

    while(maiorNumero > 9)
    {
        maiorNumero /= 10;
        digitos++;
    }
    return digitos;
}

int main()
{
    int tamanho;
    int valor;

    while(1)
    {
        cin >> tamanho;
        int mat[tamanho][tamanho];
        if(tamanho == 0)
            break;

        int maior = maiorTamanho(tamanho);
        int linha = 0, coluna;

        while(linha < tamanho)
        {
            valor = potencia(linha);
            coluna = 0;

            while(coluna < tamanho)
            {
                mat[linha][coluna]=valor;

                if(coluna != 0)
                    cout << " ";

                cout << fixed << right << setw(maior);
                cout << mat[linha][coluna];
                valor += valor;
                coluna++;
            }
            cout << endl;
            linha++;
        }
        cout << endl;
    }
    return 0;
}
