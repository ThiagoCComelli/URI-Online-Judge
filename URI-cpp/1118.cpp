#include <iostream>
#include <iomanip>

using namespace std;

double media(double a, double b){
    double medias=0;
    medias = (a+b)/2.0;
    return medias;
}

int main()
{
    int n=0,denovo=0;
    double notas[2],final,nota;

    while(true){
        cin >> nota;
        if(nota<0 || nota>10){
            cout << "nota invalida" << endl;
        } else {
            notas[n] = nota;
            n++;
        }
        if(n==2){
            final = media(notas[0],notas[1]);
            cout << "media = " << fixed << setprecision(2) << final << endl;
            while(true){
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> denovo;
                if(denovo==1){
                    n = 0;
                    break;
                }
                else if(denovo==2){
                    break;
                }
            }
        }
        if(denovo==2){
            break;
        }
    }
    return 0;
}
