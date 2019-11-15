#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>lista;
    double n;
    for (int i = 0; i < 100; ++i) {
        cin >> n;
        if (n <= 10) {
            printf("A[%d] = %.1f\n", i, n);
        }
    }
    return 0;
}
