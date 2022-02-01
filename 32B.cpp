#include<bits/stdc++.h>

using namespace std;
int main()
{
    string a;
    cin >> a;
    int flag = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i]=='.' && flag == 0)
        {
            cout << 0;
        }
        else if(a[i]=='.' && flag == 1)
        {
            cout << 1;
            flag = 0;
        }
        else if(a[i]=='-' && flag == 0)
        {
            flag = 1;
        }
        else if(a[i]=='-' && flag == 1)
        {
            cout << 2;
            flag = 0;
        }
    }
    return 0;
}
