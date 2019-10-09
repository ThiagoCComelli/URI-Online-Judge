#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int n,alcool=0,gasolina=0,diesel=0;

    while(true){
        cin >> n;
        if(n==1){
            alcool++;
        } else if(n==2) {
            gasolina++;
        } else if(n==3) {
            diesel++;
        } else if(n==4) {
            break;
        }
    }

    cout << "MUITO OBRIGADO" << endl << "Alcool: " << alcool << endl << "Gasolina: " << gasolina << endl << "Diesel: " << diesel << endl;

    return 0;
}