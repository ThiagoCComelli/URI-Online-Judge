#include <iostream>

using namespace std;

int main()
{
    double s=0;

    for (int i = 1; i < 101; ++i) {
        s += 1.0/i;
    }

    printf("%.2f\n",s);

    return 0;
}