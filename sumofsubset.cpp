#include<iostream>
using namespace std;
int n;
int w[20];
int sum=0;
int d;
int count;
int x[10];
void subset(int cs,int k,int r)
{
 int i;
 x[k]=1;
 if(cs+w[k]==d)
 {   cout<<"solution="<<++count<<"\n";
     for(i=0;i<=k;i++)
     {
         if(x[i]==1)
         {
             cout<<w[i]<<" \n  ";
         }
     }
 }
 else
 {
     if(cs+w[k]+w[k+1]<=d)
     {
         subset(cs+w[k],k+1,r-w[k]);
     }}
     if((cs+r-w[k]>=d)&&(cs+w[k+1]<=d))
     {   x[k]=0;
         subset(cs,k+1,r-w[k]);
     }


}

int main()
{

    cout<<"enter number of tasks";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    for(int i=0;i<n;i++)
    {
      sum+=w[i];
    }
    cout<<"enter the sum";
    cin>>d;
    count=0;
    subset(0,0,sum);
    return 0;
}
