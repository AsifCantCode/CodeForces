#include<bits/stdc++.h>

using namespace std;
int main()
{
    string a,b,c;
    int tst;
    cin >> tst;
    while(tst--)
    {
        cin >> a;
        int len = a.length();
        if(len%2!=0)
        {
            cout << "NO" << "\n";
        }
        else
        {
            b=a.substr(0,len/2);
            c=a.substr(len/2, len-1);
            if(b==c)
            cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }
    }
    return 0;
}