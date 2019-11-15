#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>lista;
    int n;
    for (int i = 0; i < 10; ++i) {
        cin >> n;
        if (n > 0){
            lista.push_back(n);
        } else {
            lista.push_back(1);
        }
        printf("X[%d] = %d\n",i,lista[i]);
    }


    return 0;
}
