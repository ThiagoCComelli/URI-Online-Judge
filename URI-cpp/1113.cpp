#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    while  (true){
        int x,y;
        cin >> x >> y;
        if(x==y){
            break;
        }
        if(x>y){
            cout << "Decrescente" << endl;
        } else {
            cout << "Crescente" << endl;
        }
    }
    return 0;
}
