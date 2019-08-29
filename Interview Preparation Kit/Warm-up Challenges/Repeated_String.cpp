#include <bits/stdc++.h>

using namespace std;

long long n;
string s;
long long a_numb;
long long ans;
void Read()
{
    cin>>s;
    cin>>n;
}
void Solution()
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
            a_numb++;
    }
    ans=(n/s.size())*a_numb;
    for(int i=0;i<n%s.size();i++)
    {
        if(s[i]=='a')
            ans++;
    }
    cout<<ans;
}
int main()
{
    Read();
    Solution();
    return 0;
}
