#include <iostream>

using namespace std;


long long int fatorial(long long int x){
    if ((x==0)||(x==1))
        return 1;
    return x*fatorial(x-1);
}

int main()
{
    int m,n;
    while (cin >> m >> n) {
        printf("%d\n",(fatorial(m)+fatorial(n)));
    }
    return 0;
}