#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    while (true){
        string n,m,r="0",pos,final="0";
        int u;
        bool vai= true,vai2 = false;

        cin >> n >> m;

        if(n == "0" && m == "0"){
            break;
        }
        for (int i = 0; i < m.length(); ++i) {
                pos = m.at(i);
                if(n!=pos){
                    if(vai){
                        vai = false;
                        r = "";
                    }
                    r += pos;
                }
            }
        for (int j = 0; j < r.length(); ++j) {
            pos = r.at(j);

            if(pos!="0" && vai2 == false){
                final = "";
                vai2 = true;
                final += pos;
            }
            else if(vai2==true){
                final += pos;
            }
        }
        istringstream(final) >> u;
        if(final=="0" || u==0){
            final = "0";
        }
        cout << final << endl;
    }
    return 0;
}
