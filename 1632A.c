#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf

int main()
{
    int tst;
    sf("%d", &tst);
    while(tst--)
    {
        int t;
        sf("%d", &t);
        char a[t];
        getchar();
        int cnt1=0,cnt0=0;
        for(int i=0; i<t; i++)
        {
            sf("%c", &a[i]);
            if(a[i]=='0')
            cnt0++;
            else cnt1++;
        }
        if(t<2)
        {
            pf("YES\n");
        }
        else if(cnt1>=2 || cnt0>=2)
        {
            pf("NO\n");
        }
        else pf("YES\n");
    }
    return 0;
}
