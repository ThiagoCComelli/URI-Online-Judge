#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,pum=0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= 4; ++j) {
            if(j==4){
                cout << "PUM" << endl;
            } else {
                cout << pum+j << " ";
            }
        }
        pum += 4;
    }

    return 0;
}
