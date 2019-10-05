#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,x,y;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int sum = 0;
        cin >> x >> y;

        if (x > y){
            int aux;
            aux = x;
            x = y;
            y = aux;
        }

        for (int jj = x+1; jj < y; ++jj) {
            if (jj%2!=0){
                sum += jj;
            }
        }

        cout << sum << endl;

    }
    return 0;
}
