#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    for(int i=n;i>0;i--)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    return 0;
}
