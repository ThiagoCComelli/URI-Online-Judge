#include <iostream>
#include <cmath>

using namespace std;

int primo(){
    int m,i=2;
    bool c = true, c1 = false;
    cin >> m;
    if (m==1){
        return c1;
    }
    while (pow(i,2) <= m){
        if(m%i==0){
            return c1;
        }
        i++;
    }
    return c;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        if (primo() != 0) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }
    return 0;
}

