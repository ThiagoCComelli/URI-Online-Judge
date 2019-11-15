#include <iostream>
<<<<<<< Updated upstream
#include <iomanip>
#include <vector>
#include <algorithm>
=======
#include <math.h>
>>>>>>> Stashed changes

using namespace std;

int main()
{
<<<<<<< Updated upstream
    double x,a,b,c;
    bool vai = true;
    vector<double>lista;

    for(int i=0;i<3;i++){
        cin >> x;
        lista.push_back(x);
    }

    sort(lista.begin(),lista.begin()+3);
    a = lista[2];
    b = lista[1];
    c = lista[0];

    if(a>=(b+c)){
        cout << "NAO FORMA TRIANGULO" << endl;
        vai = false;
    } else {
        if (a*a==(b*b)+(c*c) && vai) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (a*a>(b*b)+(c*c)  && vai) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (a*a<(b*b)+(c*c)  && vai) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a==b && a==c && vai) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((a==b || b==c) && !(a==b && b==c) && vai) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
=======
    double a,b,c;
    bool Ca = true;

    cin >> a >> b >> c;

    if(a >= b+c){
        cout << "NAO FORMA TRIANGULO" << endl;
        C = false;
    }
    if(a*a==(b*b+c*c)) && Ca){
        cout << "TRIANGULO RETANGULO" << endl;
    }




>>>>>>> Stashed changes
    return 0;
}