#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n;
    for (int i = 0; i < n ; ++i) {
        bool validade = true;
        cin >> m;
        for (int j = 2; j < m; ++j) {
            if(m%j==0){
                validade = false;
                break;
            }
        }
        if (!validade) {
            printf("%d nao eh primo\n",m);
        } else {
            printf("%d eh primo\n",m);
        }
    }
    return 0;
}
