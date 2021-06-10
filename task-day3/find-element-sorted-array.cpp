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

int low=0,mid,hi=n-1,pos=-1;
while(low<=hi)
{
    mid=low+(hi-low)/2;
    if(arr[mid]==ele)
    {
        pos=mid;
        break;
    }
    else
        if(arr[mid]>ele)
         hi=mid-1;
    else
        low=mid+1;
}

pos==-1?cout<<"Element not found\n":cout<<"Element found at index : "<<pos<<"\n";

return 0;
}
