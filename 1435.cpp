#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <bits/stdc++.h>

//Matriz Quadrada I

using namespace std;

int main(){

    int n;
    int val;

    int m[105][105];
    while(true){
        cin >> n;
        if(!n)return 0;
        for(int i=0; i<n; i++){
            val=1;
            for(int j=0; j<n; j++){
                if(i==0 || i==n-1 || j==0 || j==n-1){
                    m[i][j]=1;
                }
                else{
                    m[i][j]=min(n-i,min(i+1,min(n-j,j+1)));
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                printf("%3d",m[i][j]);
                if(j<n-1)printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
}
