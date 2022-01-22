#include<bits/stdc++.h>

using namespace std;
bool isPrime(long long n);
int main()
{
    int tst;
    cin >> tst;
    while(tst--)
    {
        long long x;
        cin >> x;
        long long sq = sqrt(x);
        if(sq*sq==x && isPrime(sq)==true)
        {
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
    return 0;
}

bool isPrime(long long n)
{
    if(n<2)
    {
        return false;
    }
    else if(n==2)
    {
        return true;
    }
    long long limit=sqrt(n);
    if(n%2==0)
    {
        return false;
    }
    else
    {
        for(int i=3;i<=limit;i+=2)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
}
