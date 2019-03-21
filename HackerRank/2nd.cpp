#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

int main()
{
    int a;
    long int l;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf",&a,&l,&c,&f,&d);
    printf("%d\n%ld\n%c\n%0.2f\n%0.5lf\n",a,l,c,f,d);
   // cout<<a<<endl<<l<<endl<<c<<endl<<fixed<<setprecision(2)<<f<<endl<<fixed<<setprecision(5)<<d<<endl;
}
