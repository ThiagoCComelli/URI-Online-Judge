#include <iostream>
#include <vector>
#include <cstring>


using namespace std;

int main()
{
    double lista[12][12],sum=0;
    int n;
    string aux;

    cin >> n >> aux;

    for (auto & i : lista) {
        for (double & j : i) {
           cin >> j;
        }
    }
    for (int k = 0; k < 12; k++) {
        sum += lista[n][k];

    }
    if (aux=="S"){
        printf("%.1f\n",sum);
    } else {
        printf("%.1f\n",sum/12.0);
    }


    return 0;
}
