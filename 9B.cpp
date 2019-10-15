#include <stdio.h>
#include<iostream>

using namespace std;

void calculate()
{
    freopen("test2.txt","r",stdin);
    int n;
	cin>>n;
	int a[n];
	int key;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>key;
	int s=0,e=n-1;
	int counter=0,i,j;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(a[mid]==key)
		{
			i=mid;
			j=mid;
			while(a[i--]==key)
				counter++;
			while(a[j++]==key)
				counter++;
			break;
		}
		else if(a[mid]<key)
			s=mid+1;
		else
			e=mid-1;
	}
	if(counter==0)
		cout<<"-1 -1 0"<<endl;
	else
		cout<<i+2<<" "<<j-2<<" "<<counter-1<<endl;

}


int main()
{
    calculate();
    return 0;

}
