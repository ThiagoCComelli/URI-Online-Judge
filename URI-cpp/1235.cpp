#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n,size;
    string frase;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        getline(cin,frase);

        if (i==0){
            continue;
        }

        size = frase.length();
        vector<char>lista(size);

        for (int j = 0; j < size; ++j) {
            lista[j] = frase[j];
        }

        reverse(lista.begin(),lista.begin()+(size/2));
        reverse(lista.begin() + (size/2),lista.begin() + size);

        for (int k = 0; k < size; ++k) {
            cout << lista[k];
        }
        cout << endl;
    }

    return 0;
}

