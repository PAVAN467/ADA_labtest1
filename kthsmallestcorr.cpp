#include<iostream>
#include<climits>
#include<cstdlib>
using namespace std;


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= x)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

int kthSmallest(int arr[], int l, int r, int k)
{

    if (k > 0 && k <= r - l + 1)
    {

        int pos = partition(arr, l, r);


        if (pos-l == k-1)
            return arr[pos];
        if (pos-l > k-1)
            return kthSmallest(arr, l, pos-1, k);

        return kthSmallest(arr, pos+1, r, k-pos+l-1);
    }


    return INT_MAX;
}





int main()
{
    int arr[30];
    int n,i;
    cout<<"Enter The Size Of N";
    cin>>n;
    cout<<"ENter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Start Index";
    int start,end;
    cin>>start;
    cout<<"ENter The End Index";
    cin>>end;

    cout<<"enter the kth value";
    int k;
    cin>>k;
    cout << "K'th smallest element is " << kthSmallest(arr, start-1,end, k);
    return 0;
}
