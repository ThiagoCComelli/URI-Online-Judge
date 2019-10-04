#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int aux,n,t;
    vector<int>lista;

    while (true){
        t = 0;
        cin >> n;
        if (n==0){
            break;
        }
        for (int i = 0; i < n; i++) {
            cin >> aux;
            lista.push_back(aux);
        }
        lista.push_back(lista[0]);
        lista.push_back(lista[1]);

        for (int j = 1; j<=n;j++) {
            if (lista[j] > lista[j-1]){
                if (lista[j] > lista[j+1]){
                    t++;
                }
            }
            else if (lista[j] < lista[j-1]) {
                if (lista[j] < lista[j + 1]) {
                    t++;
                }
            }
        }
        cout << t << endl;
    }
    return 0;
}
