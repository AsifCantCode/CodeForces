#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<long long>a;
    long long sum=0;
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        long long num;
        scanf("%lld",&num);
        a.push_back(num);
        sum+=num;
        if(a[i]>99999999 || a[i]<-99999999)
        {
            cout << "Error" << "\n";
            return 0;
        }
    }
    sort(a.begin(), a.end());
    int flag=0, sum1=0;
    do
    {
        flag=0;
        sum1=0;
        for(int i=0; i<a.size(); i++)
        {
            sum1+=a[i];
            if(sum1<0 || sum1>99999999)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    while(std::next_permutation(a.begin(), a.end()));
    if(flag==1)
    {
        cout << "Error" << "\n";
    }
    else
    {
        for(int i=0; i<a.size(); i++)
        {
            printf("%lld\n", a[i]);
        }
    }
    return 0;
}
