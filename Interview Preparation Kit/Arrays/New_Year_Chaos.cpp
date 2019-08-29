#include <iostream>

using namespace std;

int n,t,ok,min_nr;
int q[100001];

void Solve()
{
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++)
            cin>>q[j];
        min_nr=0;
        ok=1;
        for(int j=0;j<n;j++)
        {
            if(q[j]-1>j+2)
                ok=0;
            for(int k=max(0,q[j]-2);k<j;k++)
            {
                if(q[k]>q[j])
                    min_nr++;
            }
        }
        if(ok==1)
            cout<<min_nr<<'\n';
        else
            cout<<"Too chaotic"<<'\n';
    }
}

int main()
{
    Solve();
    return 0;
}
