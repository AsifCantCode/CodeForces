#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tst;
    cin >> tst;
    while(tst--)
    {
        int n,k;
        cin >> n >> k;
        pair<int,int> a[n];
        for(int i=0; i < n; i++)
        {
            int num;
            cin >> num;
            a[i].first = num;
        }
        for(int i=0; i < n; i++)
        {
            int num;
            cin >> num;
            a[i].second = num;
        }
        sort(a,a+n);
        int sum=k;
            for(int i=0; i < n; i++)
            {
                if(a[i].first<=sum)
                {
                    sum+=a[i].second;
                }
            }
        cout << sum << "\n";
    }
    return 0;
}