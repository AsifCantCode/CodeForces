#include<bits/stdc++.h>

using namespace std;
long long makeint( double x);
int main()
{
    int tst;
    cin >> tst;
    long long mH, mA, dH, dA, k, w, a;
    while(tst--)
    {
        int flag = 0;
        cin >> mH >> mA >> dH >> dA >> k >> w >> a;
        long long mA2,mH2;
        for(int i=0;i<=k;i++)
        {
            mA2=(i*w)+mA; mH2=((k-i)*a)+mH;
            // double x = (double)dH/(double)mA;
            // long long x1 = makeint(x);
            // double y =(double)mH/(double)dA;
            // long long y1 = makeint(y);
            // if(x1>=y1)
            // {
            //     flag = 1;
            //     break;
            // }
            long long x = mH2/dA;
            x=mH2%dA==0? x:(x+1);
            long long y = dH/mA2;
            y=dH%mA2==0? y:(y+1);
            if(x>=y)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}

// long long makeint( double x)
// {
//     if(x-(int)x==0)
//     return (long long)x;
//     else
//     return (long long)x+1;
// }
