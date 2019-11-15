#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>lista;
    int n,m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        lista.push_back(m);
    }
    auto min = min_element(lista.begin(),lista.end());
    auto minindex = min_element(lista.begin(),lista.end()) - lista.begin();;
    printf("Menor valor: %d\n",*min);
    printf("Posicao: %d",minindex);

    return 0;
}
