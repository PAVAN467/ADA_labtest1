#include<iostream>
using namespace std;
int median(int a[],int n)
{
if(n%2==0)
{
return (a[n/2]+a[n/2-1])/2;
}
return a[n/2];
}

int getmedian(int ar1[],int ar2[],int n)
{
    if(n<=0)
    {
        return -1;
    }
    if(n==1)
    {
        return (ar1[0]+ar2[0])/2;

    }
    if(n==2)
    {
        return (max(ar1[0],ar2[0])+min(ar1[1],ar2[1]))/2;

    }



    int m1=median(ar1,n);
    int m2=median(ar2,n);
    if(m1==m2)
    {
        return m1;
    }
    if(m1<m2)
    {
        if(n%2==0)
        {
            return getmedian(ar1+n/2-1,ar2,n-n/2+1);
        }
        return getmedian(ar1+n/2,ar2,n-n/2);
    }
    if(n%2==0)
    {
         return getmedian(ar2+n/2-1,ar1,n-n/2+1);
    }
    return getmedian(ar2+n/2,ar1,n-n/2);

}

int main()
{

    int a1[]={1,2,3,6};
    int a2[]={4,6,8,10};
   int  n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(a2)/sizeof(a2[0]);

    if(n1==n2)
    {
        cout<<"median is=";
        cout<<getmedian(a1,a2,n1);

    }
    else
    {
        cout<<"for unequal use another  algorithms";
    }
    return 0;
}

