#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int x,y,sum=0,aux;
    cin >> x >> y;

    if (x>y){
        aux = x;
        x = y;
        y = aux;
    }

    for (int i = x; i < y+1; ++i) {
        if(i%13!=0){
            sum+=i;
        }
    }
    cout << sum << endl;
    return 0;
}
