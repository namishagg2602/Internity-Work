#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

cout<<"Enter n: ";
int n;
cin>>n;

int arr[n];

cout<<"\nEnter array : ";
for(int i=0;i<n;i++)
    cin>>arr[i];


int l=arr[0],sm=arr[0];
	for(int i=0;i<n;i++)
	{
		if(l<arr[i])
		l=arr[i];
		if(sm>arr[i])
		sm=arr[i];
	}
	cout<<"Smallest element is : "<<sm<<"\n";
	cout<<"Largest element is : "<<l<<"\n";




	// Finding kth smallest and the kth largest element
	int k,ind;
    cout<<"Enter k :";
	cin>>k;
	for(int i=0;i<n;i++)   // sorting the array
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j+1]<arr[j])
			{
				int t=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=t;
			}
		}
	}

	int cnt=0,kl,ks;
	int ar2[n];
	for(int i=0;i<n-1;i++)
	{
		while(arr[i]==arr[i+1])
			++i;

	    ar2[cnt]=arr[i];
		++cnt;
	}
	if(arr[n-1]!=arr[n-2])
	{
		ar2[cnt]=arr[n-1];
		++cnt;
	}


	if(cnt<k)
	{
		kl=ks=-1;
	}
    else
    {
    	kl=ar2[cnt-k];
    	ks=ar2[k-1];
    }

	if(kl==-1)
	cout<<k<<"th largest element does not exist\n";
	else
	cout<<k<<"th largest element is : "<<kl<<"\n";

	if(ks==-1)
	cout<<k<<"th smallest element does not exist\n";
	else
	cout<<k<<"th smallest element is : "<<ks<<"\n";

return 0;
}
