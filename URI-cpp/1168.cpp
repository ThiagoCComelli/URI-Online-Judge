#include <iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int n;
    char num[1000];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int sum=0,lenght;
        cin >> num;
        lenght = strlen(num);
        for (int j = 0; j < lenght; ++j) {
            if (num[j]=='0'){
                sum+=6;
            } else if (num[j]=='1'){
                sum+=2;
            } else if (num[j]=='2'){
                sum+=5;
            } else if (num[j]=='3'){
                sum+=5;
            } else if (num[j]=='4'){
                sum+=4;
            } else if (num[j]=='5'){
                sum+=5;
            } else if (num[j]=='6'){
                sum+=6;
            } else if (num[j]=='7'){
                sum+=3;
            } else if (num[j]=='8'){
                sum+=7;
            } else if (num[j]=='9'){
                sum+=6;
            }
        }
        printf("%d leds\n",sum);
    }


    return 0;
}
