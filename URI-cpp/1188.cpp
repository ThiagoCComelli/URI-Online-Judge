#include <iostream>

using namespace std;

int main()
{
    double lista[12][12],sum=0;
    string aux;

    cin >> aux;

    for (auto & i : lista) {
        for (double & j : i) {
            cin >> j;
        }
    }
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            if ((i+j>11) && (j < i)){
                sum += lista[i][j];
            }
        }
    }
    if (aux=="S"){
        printf("%.1f\n",sum);
    } else {
        printf("%.1f\n",sum/66);
    }

    return 0;
