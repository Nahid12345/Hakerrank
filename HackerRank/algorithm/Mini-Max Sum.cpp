#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ar[5],sum=0;
    for(int i=0; i<5; i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    sort(ar,ar+5);
    cout<<sum-ar[4]<< " "<<sum-ar[0]<<endl;

    return 0;
}
