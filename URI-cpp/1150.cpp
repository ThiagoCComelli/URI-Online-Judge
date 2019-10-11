#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x,y,sum,q=1;
    cin >> x;
    while (true) {
        cin >> y;
        if(y>x){
            break;
        }
    }
    sum = x;
    do {
        sum += x+q;
        q++;
    } while (sum<y);

    cout << q << endl;

    return 0;
}