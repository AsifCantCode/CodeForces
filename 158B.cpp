#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin >> tst;
    int cnt=0,sum1=0,sum2=0,sum3=0;
    int a[tst];
    for(int i=0;i<tst;i++)
    {
        cin >> a[i];
        if(a[i]==1)
        sum1++;
        else if(a[i]==2)
        sum2++;
        else if(a[i]==3)
        sum3++;
        else cnt++;
    }
    while(sum1>0 && sum3>0)
    {
        sum1--;sum3--;
        cnt++;
    }
    while(sum1>0 && sum2>0)
    {
        sum1=sum1-2; sum2--;
        cnt++;
    }
    if(sum3 > 0 || sum2 > 0 || sum1 > 0)
    {
        if(sum3>0)
        {
            cnt+=sum3;
            if(sum2>0)
            {
                sum2*=2;
                if(sum2%4==0)
                {
                    cnt+=sum2/4;
                }
                else cnt+=sum2/4+1;
                if(sum1>0)
                {
                    if(sum1%4==0)
                    {
                        cnt+=sum1/4;
                    }
                    else cnt+=sum1/4+1;
                }
            }
        }
        else if(sum2>0)
        {
            if(sum2>0)
            {
                sum2*=2;
                if(sum2%4==0)
                {
                    cnt+=sum2/4;
                }
                else cnt+=sum2/4+1;
                if(sum1>0)
                {
                    if(sum1%4==0)
                    {
                        cnt+=sum1/4;
                    }
                    else cnt+=sum1/4+1;
                }
            }
        }
        else if(sum1>0)
        {
            if(sum1%4==0)
            {
                cnt+=sum1/4;
            }
            else cnt+=sum1/4+1;
        }
    }
    cout << cnt << endl;
    return 0;
}
