#include <iostream>

using namespace std;

int main()
{
    int a,c,n;
    char m;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        scanf("%d%c%d\n",&a,&m,&c);
        if (a==c){
            printf("%d\n",a*c);
        } else {
            if (isupper(m)) {
                printf("%d\n",c-a);
            } else {
                printf("%d\n",a+c);
            }
        }


    }
    return 0;
}
