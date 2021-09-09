#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t,n,m,a,b,k;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        m =(b/2)+1;
        if(m>=a)
        {
            cout << b%m <<endl;
        }
        else cout << b%a << endl;
    }
    return 0;
}