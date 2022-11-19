#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <stdlib.h>

//Experiências

using namespace std;

int main(){

    int n;
    double x, r=0, s=0, c=0;
    char j;
    cin >> n;

    for(int i=0; i<n; ++i){
        cin >> x >> j;

        if(j=='C'){
            c+=x;
        }else if(j=='R'){
            r+=x;
        }else{
            s+=x;
        }
    }

    double total=(r+s+c);
    double d=((100*c)/total);
    double e=((100*r)/total);
    double f=((100*s)/total);

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << d << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << e << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << f << " %" << endl;

return 0;
}
