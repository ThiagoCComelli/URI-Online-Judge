#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n=0;
    double sum,result,nota;
    while(true){
        if(n==2){
            break;
        }
        cin >> nota;
        if(nota<0 || nota>10){
            cout << "nota invalida" << endl;
        } else {
            sum += nota;
            n++;
        }
    }

    result = sum/2.0;

    cout << "media = " << fixed << setprecision(2) << result << endl;

    return 0;
}
