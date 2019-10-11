#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int anos=0,pag1,pbg2,a=0,b=0;
        double ca=0,cb=0;

        cin >> a >> b >> ca >> cb;

        while (a<=b) {
            pag1 = a*(ca/100);
            pbg2 = b*(cb/100);
            a += pag1;
            b += pbg2;
            anos++;
            if (anos > 100) {
                break;
            }
        }
        if (anos>100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n",anos);
        }

    }

    return 0;
}