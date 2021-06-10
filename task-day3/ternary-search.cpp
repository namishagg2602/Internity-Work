#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

int arr[n],ele;
for(int i=0;i<n;i++)
  cin>>arr[i];
cin>>ele;

int lo=0,hi=n-1,pos=-1;
while(lo<=hi){

	int mid1 = lo + (hi-lo)/3;
	int mid2 = hi - (hi-lo)/3;

	if(arr[mid1]==ele)
    {
        pos=mid1;
        break;
    }
    else
	if(arr[mid2]==ele)
    {
        pos=mid2;
        break;
    }
    else
	if(ele<arr[mid1])
		hi = mid1 -1;

	else if(ele>arr[mid2])
		lo = mid2 + 1;
	else{
		lo = mid1 + 1;
		hi = mid2 -1;
	    }
}

pos==-1?cout<<"Element not found\n":cout<<"Element found at index : "<<pos<<"\n";
return 0;
}
