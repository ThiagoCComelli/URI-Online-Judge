#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    while(true){
        int x,y;
        cin >> x >> y;
        if (x==0 || y==0){
            break;
        }
        if (x>0){
            if(y>0){
                cout << "primeiro" << endl;
            } else {
                cout << "quarto" << endl;
            }
        } else {
            if(y>0){
                cout << "segundo" << endl;
            } else {
                cout << "terceiro" << endl;
            }
        }
    }
    return 0;
}
