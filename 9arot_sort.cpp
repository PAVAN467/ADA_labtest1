#include<iostream>
using namespace std;
int mid;
int binary_search(int a[],int low,int high,int elem)
{ while(low<=high)
 {
    mid=(low+high)/2;


 if(a[mid]==elem)
 {
     return mid;
 }
 if(a[mid]<=a[high])
 {
     if(elem>=a[mid]&&elem<=a[high])
     {
          low=mid+1;
     }
        high=mid-1;

 }
 if(elem<=a[mid]&&elem>=a[low])
 {
      high=mid-1;
 }
 else
 {
      low=mid+1;
 }}
 return -1;

}

int main()
{ int elem;
    int a[]={5,6,7,8,9,10,1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    //cout<<n;
    cout<<"enter the search elem";
    cin>>elem;
    cout<<binary_search(a,0,n-1,elem);
    return 0;

}
