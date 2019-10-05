#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    while(true){
        int password;
        cin >> password;
        if (password==2002){
            break;
        } else {
            cout << "Senha Invalida" << endl;
        }
    }
    cout << "Acesso Permitido" << endl;
    return 0;
}
