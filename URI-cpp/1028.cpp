#include <iostream>

using namespace std;

int mdc(int x, int y){
    int aux = 0;
    for(int i=0;y%x != 0;i++){
        aux = x;
        x = y%x;
        y = aux;
    }
    return x;
}

int main(){
    int n,aux,a,b;

    cin >> n;

    for (int i = 0; i < n ; ++i) {
        cin >> a >> b;
        cout << mdc(a,b) << endl;
    }

    return 0;
}