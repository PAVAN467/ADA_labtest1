#include<iostream>
using namespace std;
int a[20][20];
int visited[20];
int n;
void DFS(int i)
{
    cout<<i;
    visited[i]=1;

   for(int j=0;j<=n;j++)
   {
       if(a[j][i]&&!visited[j])
       {

           DFS(j);
       }

   }

}
void connected()
{
    for(int i=0;i<=n;i++)
    {

        if(!visited[i])
        {

            DFS(i);
            cout<<"\n";
        }

    }
}
int main()
{

cout<<"enter number of vertex";
cin>>n;

for(int i=0;i<=n;i++)
{

    for(int j=0;j<=n;j++)
    {

        cin>>a[i][j];
    }
    visited[i]=0;
}
connected();
return 0;
}
