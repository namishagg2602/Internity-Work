#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {



	int arr[]={1,2,3,4,4,5,5,6,7,8,9};


	// To find the size of an array
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Size of array is : "<<n<<"\n";

	cout<<"Original array is : ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<"\n";




	// Reversing the array
	for(int i=0;i<n/2;i++)
	{
		int t;
		t=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=t;
	}



	cout<<"Array after reversal is : ";
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<"\n";


	return 0;
	}
