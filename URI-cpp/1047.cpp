#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int hi,mi,hf,mf,horas,minutos,a = 0;

    cin >> hi >> mi >> hf >> mf;

    horas = hf - hi;
    minutos = mf - mi;

    if (horas < 0) {
        horas = 24 + horas;
    }
    if (minutos < 0) {
        minutos = 60 + minutos;
        horas--;
        if (horas < 0) {
            horas = 23;
        }
    }
    if (hi == hf && mi == mf) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    } else {
        cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
    }

    return 0;
}
