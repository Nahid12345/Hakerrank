#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m1=0,m2=0,dif;
    cin>>n;
    int ar[n][n];
   // int sum[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>ar[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=i; j<=i; j++)
        {
           m1+=ar[i][j];
        }
        m2+=ar[i][n-i-1];
    }
    dif=abs(m1-m2);
    cout<<dif<<endl;

}
