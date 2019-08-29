#include <iostream>
//#include <fstream>
#define N 10000000
using namespace std;
/*in("a.in");
ofstream out("a.out");
*/
int n,m;
int vect[N];
void Read()
{
    int a,b,i,j;
    long k;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b>>k;
        for(j=a;j<=b;j++)
        {
            vect[j]+=k;
        }
    }
}
void findMax()
{
    int maxx=-1;
    int i;
    for(i=1;i<=n;i++)
    {
        if(vect[i]>=maxx)
        {
            maxx=vect[i];
        }
    }
    cout<<maxx;
}
int main()
{
    Read();
    findMax();
    return 0;
}
