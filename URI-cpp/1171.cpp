#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    vector<int>lista;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        lista.push_back(m);
    }

    set<int>lista1(lista.begin(),lista.end());

    for (int k : lista1) {
        printf("%d aparece %d vez(es)\n",k,count(lista.begin(),lista.end(),k));
    }

    return 0;
}
