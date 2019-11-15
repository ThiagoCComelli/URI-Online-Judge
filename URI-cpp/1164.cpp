#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n;
    for (int i = 0; i < n ; ++i) {
        int sum=0;
        cin >> m;
        for (int j = 1; j < m; ++j) {
            if (m%j==0){
                sum += j;
            }
        }
        if(sum==m){
            printf("%d eh perfeito\n",m);
        } else {
            printf("%d nao eh perfeito\n",m);
        }
    }

    return 0;
}
