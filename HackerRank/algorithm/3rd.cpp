#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar1[3],ar2[3];
    int i,j,sum1=0,sum2=0;
    for(i=0; i<3; i++)
    {
        cin>>ar1[i];
    }

    for(j=0; j<3; j++)
    {
        cin>>ar2[j];
    }
    /* if(ar1[0]==ar2[0])
     {
        sum1+=0;
     }
     else if(ar1[0]>ar2[0])
     {
         sum1+=1;
     }
     else
     {
         sum2+=1;
     }
     if(ar1[1]==ar2[1])
     {
        sum1+=0;
     }
     else if(ar1[1]>ar2[1])
     {
         sum1+=1;
     }
     else
     {
         sum2+=1;
     }
     if(ar1[2]==ar2[2])
     {
        sum1+=0;
     }
     else if(ar1[2]>ar2[2])
     {
         sum1+=1;
     }
     else
     {
         sum2+=1;
     }*/
    for(i=0; i<3; i++)
    {
        if(ar1[i]>ar2[i])
        {
            sum1+=1;
        }
        else if(ar1[i]<ar2[i])
        {
            sum2+=1;
        }
        else if(ar1[i]==ar2[i])
        {
            sum1+=0;
            sum2+=0;
        }
    }

    cout<<sum1<< " "<<sum2<<endl;
    return 0;
}
