#include <iostream>

using namespace std;

void quick_sort(int[],int,int);
int partition(int[],int,int);

int main()
{
    int a[50],n,i;
    int f,l,k;
    cout<<"How many elements?";
    cin>>n;
    cout<<"\nEnter array elements:";

    for(i=0;i<n;i++)
        cin>>a[i];

    quick_sort(a,0,n-1);

    cout<<"enter the start";
    cin>>f;
    cout<<"enter last";
    cin>>l;
    cout<<"enter the kth element";
    cin>>k;

        cout<<a[k-1]<<" ";

    return 0;
}

void quick_sort(int a[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=partition(a,l,h);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,h);
    }
}
int  partition( int a[],int low,int high)
{


int pivot=a[low];
int i=low+1;
int j=high;
int temp;
while(1) {
       while (a[i]<=pivot and i<=high)
        {
            i=i+1;
        }
       while (a[j]> pivot and j>=low )
        {
            j=j-1;
        }
       if (i<j)
        {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       }
            //swap a[i] and a[j]
        else {
            a[low]=a[j];
            a[j]=pivot;
            return j;
}
}
}

