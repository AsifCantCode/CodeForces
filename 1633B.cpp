#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define pf printf
#define sf scanf

int main()
{
    int tst;
    sf("%d", &tst);
    char ch[1000000];
    while(tst--)
    {
        sf("%s", ch);
        int len = strlen(ch);
        int cnt0=0, cnt1=0;
        for(int i = 0; i < len; i++)
        {
            if(ch[i]=='0')
            {
                cnt0++;
            }
            else if(ch[i]=='1')
            cnt1++;
        }
        if(len<=2)
        {
            pf("0\n");
        }
        else if(cnt0!=cnt1)
        {
            pf("%d\n", cnt1>cnt0?cnt0:cnt1);
        }
        else pf("%d\n", cnt1-1);
    }
    return 0;
}
