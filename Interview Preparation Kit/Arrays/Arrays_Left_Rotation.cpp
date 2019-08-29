#include <iostream>

using namespace std;
int n,d;
int arr[1000001];
int brr[1000001];
void Read()
{
    cin>>n>>d;
    for(int i=0;i<n;i++)
        cin>>arr[i];
}

void LeftRot()
{
    int x;
    while(d)
    {
        x=arr[1];
        for(int i=2;i<=n;i++)
            arr[i-1]=arr[i];
        arr[n]=x;
        d--;
    }
}


void LeftRotBetter()
{
    int index;
    for(int i=0;i<n;i++)
    {
        index =((i-d) % n + n) % n;
        brr[index]=arr[i];
    }
}

void Write()
{
    for(int i=0;i<n;i++)
        cout<<brr[i]<< " ";
}

int main()
{
    Read();
    LeftRotBetter();
    Write();
}
