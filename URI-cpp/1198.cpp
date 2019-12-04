#include <iostream>

using namespace std;

int main()
{
    long long int n, m;
    while (cin >> n >> m) {
        printf("%lld \n",abs(m-n));
    }
    return 0;
}

