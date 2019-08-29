#include <iostream>

using namespace std;

int main()
{
    int n, frec[101]={0},x,i,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        frec[x]++;
    }
    for(i=0;i<=100;i++)
    {
            k+=frec[i]/2;
    }
    cout<<k;

    return 0;
}