#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    while (true){
        int n;
        cin >> n;
        if(n==0){
            break;
        }
        for (int i = 0; i < n; ++i) {
            int valor,pos=0,tot=0;

            for (int j = 0; j < 5; ++j) {
                cin >> valor;
                if(valor <= 127){
                    tot++;
                    pos = j;
                }
            }
            if(tot==1){
                if(pos==0){
                    cout << "A" << endl;
                }
                else if(pos==1){
                    cout << "B" << endl;
                }
                else if(pos==2){
                    cout << "C" << endl;
                }
                else if(pos==3){
                    cout << "D" << endl;
                }
                else if(pos==4){
                    cout << "E" << endl;
                } else {
                    cout << "*" << endl;
                }
            } else {
                cout << "*" << endl;
            }
        }
    }

    return 0;
}
