#include <iostream>
#include <string>

using namespace std;

int main(){
    int n,lenx,leny;
    string x,y;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        lenx = x.length();
        leny = y.length();
        if(lenx < leny){
            printf("nao encaixa\n");
        } else if (lenx == leny && x == y){
            printf("encaixa\n");
        } else if (x.substr(lenx-leny,lenx) == y){
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }

    }
    return 0;
}