#include<bits/stdc++.h>

using namespace std;
void solve()
{
    long long x;
    cin >> x;
    set <int> a;
    for(int i=1;i*i<=x;i++)
    {
        a.insert(i*i);
    }
    for(int i=1;i*i*i<=x;i++)
    {
        a.insert(i*i*i);
    }
    cout << a.size() << endl;
}
int main()
{
    long long tst,cnt=0;
    double n;
    cin >> tst;
    while(tst--)
    {
        solve();
    }
    return 0;
}