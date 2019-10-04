#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>



using namespace std;

int main()
{
    int w,x,y,z,w1,x1,y1,z1,dia,hora,minuto,segundo;
    string n,n1,n2,n3,n4,n5;

    cin >> n >> w >> x >> n1 >> y >> n2 >> z >> n3 >> w1 >> x1 >> n4 >> y1 >> n5 >> z1;

    dia = w1-w;
    hora = x1-x;
    minuto = y1-y;
    segundo = z1-z;

    if (hora < 0){
        hora += 24;
        dia -= 1;
    }
    if (minuto < 0){
        minuto += 60;
        hora -= 1;
    }
    if (segundo < 0){
        segundo += 60;
        minuto -= 1;
    }
    if (dia <= 0){
        dia = 0;
    }

    cout << dia << " dia(s)" << endl;
    cout << hora << " hora(s)" << endl;
    cout << minuto << " minuto(s)" << endl;
    cout << segundo << " segundo(s)" << endl;

    return 0;
}
