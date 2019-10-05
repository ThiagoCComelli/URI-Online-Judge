#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,x;
    double res,y;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if(y==0){
            cout << "divisao impossivel" << endl;
        } else {
            res = x/y;
            cout << fixed << setprecision(1) << res << endl;
        }
    }
    return 0;
}
