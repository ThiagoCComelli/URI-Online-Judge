#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,aux;
    cin >> n;
    aux = n;
    for (int i = 0; i < 1000; ++i) {
         printf("N[%d] = %d\n",i,n-aux);
         aux -= 1;
         if (aux==0){
             aux = n;
         }
    }
    return 0;
}
