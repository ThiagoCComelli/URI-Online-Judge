#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double n,aux;
    cin >> n;
    aux = n;
    for (int i = 0; i < 100; ++i) {
        printf("N[%d] = %.4f\n",i,aux);
        aux = aux/2;
    }
    return 0;
}
