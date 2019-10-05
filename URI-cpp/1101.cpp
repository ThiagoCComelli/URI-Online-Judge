#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    while (true){
        int m,n,sum=0;

        cin >> m >> n;

        if(m==0 || n==0 || m<0 || n<0){
            break;
        }

        if (m > n){
            int aux;
            aux = m;
            m = n;
            n = aux;
        }

        for (int mm = m; mm <= n ; ++mm) {
            cout << mm << " ";
            sum += mm;
        }

        cout << "Sum=" << sum << endl;

    }
    return 0;
}
