#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i = 1, j = 60;

    while (j!=-5){
        cout << "I=" << i << " J=" << j << endl;
        i += 3;
        j -= 5;
    }

    return 0;
}
