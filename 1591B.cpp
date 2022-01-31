#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tst;
    cin >> tst;
    
    while(tst--)
    {
        int count = 0;
        int t;
        cin >> t;
        int a[t];
        for(int i = 0; i < t; i++)
        {
            cin >> a[i];
        }
        int max = *max_element(a, a+t);
        int last = t-1;
        while(a[last]!=max)
        {
            int p = last - 1;
            while(a[p]<=a[last])
            {
                p--;
            }
            last = p;
            count++;
        }
        cout << count << "\n";
    }
    return 0;
}
