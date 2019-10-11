#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,aux=0;

    cin >> n;
    aux = n;

    while (true) {
        n--;
        aux *= n;
        if (n==1) {
            break;
        }
    }

    cout << aux << endl;

    return 0;
}