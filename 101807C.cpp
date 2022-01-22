#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int p = log2(n);
        if((pow(2,p)-n)==0)
        {
            cout << "No" << endl;
        }
        else cout << "Yes" << endl;
    }
    return 0;
}
