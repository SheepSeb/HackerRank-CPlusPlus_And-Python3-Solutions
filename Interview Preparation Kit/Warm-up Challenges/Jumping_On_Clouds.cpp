#include <bits/stdc++.h>

using namespace std;

void Solution()
{
    int n, clouds[105],jumps;
    jumps=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>clouds[i];
    for(int i=0;i<n;i++)
    {
        if(i+2<n && !clouds[i+2])
        {
            jumps++;
            i++;
        }
        else if(i+1<n && !clouds[i+1])
            jumps++;
    }
    cout<<jumps;
}

int main()
{
    Solution();
    return 0;
}
