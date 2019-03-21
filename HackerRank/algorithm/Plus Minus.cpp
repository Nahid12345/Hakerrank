#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    double ps=0,ne=0,ze=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]>0){
            ps++;
        }
        else if(ar[i]<0)
        {
            ne++;
        }
        else
        {
            ze++;
        }
    }
    cout<<fixed<<setprecision(6)<<(ps/n)<<endl<<fixed<<setprecision(6)<<(ne/n)<<endl<<fixed<<setprecision(6)<<(ze/n)<<endl;
    return 0;
}
