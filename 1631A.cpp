#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tst;
    cin >> tst;
    while(tst--)
    {
        int t;
        cin >> t;
        vector<int>v;
        for(int i=0; i<t; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }
        vector<int>v2;
        for(int i=0; i<t; i++)
        {
            int num;
            cin >> num;
            v2.push_back(num);
        }
        int max= *max_element(v.begin(), v.end());
        int max2 = *max_element(v2.begin(), v2.end());
        int max3 = max>max2? max:max2;
        int flag =0, flag1=0;
        if(max3==max)
        flag = 1;
        else flag1 = 1;
        if(flag)
        {
            for(int i=0; i<t; i++)
            {
                if(v[i]!=max3 && v2[i]>=v[i])
                {
                    swap(v[i], v2[i]);
                }
            }
        }
        else
        {
            for(int i=0; i<t; i++)
            {
                if(v2[i]!=max3 && v[i]>=v2[i])
                {
                    swap(v[i], v2[i]);
                }
            }
        }
        // for(int i=0; i<t; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << "\n";
        // for(int i=0; i<t; i++)
        // {
        //     cout << v2[i] << " ";
        // }
        if(flag)
        {
            max2= *max_element(v2.begin(), v2.end());
        }
        else max2= *max_element(v.begin(), v.end());
        cout << max2*max3 << endl;
    }
    return 0;
}
