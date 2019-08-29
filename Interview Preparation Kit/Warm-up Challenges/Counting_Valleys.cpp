#include <bits/stdc++.h>

using namespace std;

int n;
int valley_count,earth_lvl;
char s;


void Solution()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s=='U')
            earth_lvl++;
        else
            earth_lvl--;
        if(earth_lvl==0 && s=='U')
            valley_count++;
    }
    cout<<valley_count;
}

int main()
{
    Solution();
    return 0;
}
