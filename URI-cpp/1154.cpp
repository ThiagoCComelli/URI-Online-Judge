#include <iostream>

using namespace std;

int main()
{
    int qtde=0;
    double sum=0,res;
    while (true) {
        double idade;
        cin >> idade;
        if (idade >= 0) {
            qtde++;
            sum += idade;
        } else {
            break;
        }
    }

    res = sum/qtde;

    printf("%.2f\n",res);

    return 0;
}