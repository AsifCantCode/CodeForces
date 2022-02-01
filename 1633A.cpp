#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define sf scanf
#define pf printf

using namespace std;
int main()
{
    int tst;
    sf("%d", &tst);
    while(tst--)
    {
        char c[4];
        sf("%s", c);
        if(atoi(c)%7==0)
        {
            pf("%d\n", atoi(c));
        }
        else
        {
            int x= atoi(c)/7;
            x*=7;
            char a[4];
            sprintf(a,"%d",x);
            if(c[strlen(c)-2]==a[strlen(c)-2])
            {
                pf("%d\n", atoi(a));
            }
            else pf("%d\n", atoi(a)+7);
        }
    }
    return 0;
}
