#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i = 1, j = 7;

    while (i!=11){
        for (int k = 0; k < 3; ++k) {
            cout << "I=" << i << " J=" << j-k << endl;
        }
        i += 2;
        j = 7;
    }

    return 0;
}
