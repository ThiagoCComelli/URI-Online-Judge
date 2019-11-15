#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>lista;
    int n;
    cin >> n;
    for (int i = 0; i < 10; ++i) {
        if (i==0) {
            lista.push_back(n);
        } else {
            lista.push_back(lista[i-1]*2);
        }
        printf("N[%d] = %d\n",i,lista[i]);
    }

    return 0;
}
