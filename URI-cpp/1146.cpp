#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    while (true) {
        int n;
        cin >> n;
        if (n==0) {
            break;
        }
        for (int i = 1; i < n+1; ++i) {
            if (i==n) {
                cout << i << endl;
            } else {
                cout << i << " ";
            }
        }
    }

    return 0;
}