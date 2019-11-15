#include <iostream>
#include <vector>

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
    for (int j : lista) {
        printf("%d\n",j);
    }
    set<int>lis(lista.begin(),lista.end())
    
    return 0;
}
